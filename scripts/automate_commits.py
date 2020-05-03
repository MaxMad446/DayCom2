import os
import subprocess
import sys
import time
import json
import random
import logging
from datetime import datetime, timedelta, date

# ================= НАСТРОЙКИ =================
PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SCRIPTS_DIR = os.path.join(PROJECT_DIR, "scripts")
STATE_FILE = os.path.join(PROJECT_DIR, ".commit_state.json")
LOG_FILE = os.path.join(PROJECT_DIR, "daemon.log")

START_HOUR, END_HOUR = 8, 20
ACTIVE_DAYS = [0, 1, 2, 3, 4, 5, 6]  # 0=Пн ... 6=Вс
MAX_BACKFILL_DAYS = 2200               # Лимит нагона за 1 запуск
BATCH_PUSH_SIZE = 30                  # Коммитов на 1 пуш

COMMIT_MESSAGES = [
    "Update core logic and refactor", "Fix edge cases in utils",
    "Improve error handling", "Optimize data processing",
    "Add documentation and tests", "Refactor config structure",
    "Enhance performance metrics", "Update dependencies",
    "Clean up unused code", "Add new module components"
]
# =============================================

logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s | %(levelname)s | %(message)s",
    handlers=[
        logging.FileHandler(LOG_FILE, encoding="utf-8"),
        logging.StreamHandler(sys.stdout)
    ]
)

def run_cmd(cmd, cwd=None, env=None):
    full_env = os.environ.copy()
    if env: full_env.update(env)
    res = subprocess.run(cmd, shell=True, cwd=cwd or PROJECT_DIR, capture_output=True, text=True, env=full_env)
    if res.returncode != 0:
        logging.warning(f"CMD: {res.stderr.strip()}")
        return False
    return True

def load_state():
    if os.path.exists(STATE_FILE):
        try:
            with open(STATE_FILE, 'r', encoding='utf-8') as f: return json.load(f)
        except: pass
    return {"last_run_date": None}

def save_state(date_str):
    with open(STATE_FILE, 'w', encoding='utf-8') as f:
        json.dump({"last_run_date": date_str, "updated_at": datetime.now().isoformat()}, f)

def get_git_date_str(dt: datetime) -> str:
    tz = datetime.now().astimezone().strftime('%z')
    return f"{dt.strftime('%Y-%m-%dT%H:%M:%S')}{tz[:3]}:{tz[3:]}"

def commit_for_day(day_date: date, count: int = 3):
    dt_base = datetime.combine(day_date, datetime.min.time())
    generate_script = os.path.join(SCRIPTS_DIR, "generate_code.py")
    
    for i in range(count):
        if os.path.exists(generate_script):
            run_cmd(f'python "{generate_script}"', cwd=SCRIPTS_DIR)
        else:
            logging.error("generate_code.py not found!")
            return False
            
        run_cmd("git add .")
        
        commit_dt = dt_base.replace(hour=random.randint(START_HOUR, END_HOUR), 
                                    minute=random.randint(0, 59), 
                                    second=random.randint(0, 59))
        env = {
            "GIT_AUTHOR_DATE": get_git_date_str(commit_dt),
            "GIT_COMMITTER_DATE": get_git_date_str(commit_dt)
        }
        if run_cmd(f'git commit -m "{random.choice(COMMIT_MESSAGES)}"', env=env):
            time.sleep(random.uniform(0.5, 2.0))
    return True

def push_safely():
    try:
        cmd = "git rev-list --count HEAD..origin/main 2>nul || echo 0"
        total = int(subprocess.check_output(cmd, shell=True).decode().strip())
    except:
        total = 0
    if total == 0:
        logging.info("📦 Нет новых коммитов для пуша.")
        return True
        
    pushed = 0
    while pushed < total:
        if run_cmd("git push origin main"):
            pushed += BATCH_PUSH_SIZE
            if pushed < total: time.sleep(10)
        else:
            logging.warning("⚠️ Push failed. Retrying in 15s...")
            time.sleep(15)
    logging.info("✅ All commits pushed successfully.")
    return True

def catch_up_missed_days():
    state = load_state()
    last = state.get("last_run_date")
    today = date.today()

    # 🔧 ИСПРАВЛЕНИЕ: Если состояния нет, начинаем бэкфилл с лимита
    if last is None:
        start = today - timedelta(days=MAX_BACKFILL_DAYS)
    else:
        start = datetime.strptime(last, "%Y-%m-%d").date()

    # Не уходим дальше настроенного лимита
    start = max(start, today - timedelta(days=MAX_BACKFILL_DAYS))

    missed = []
    cur = start + timedelta(days=1)
    while cur <= today:
        if cur.weekday() in ACTIVE_DAYS:
            missed.append(cur)
        cur += timedelta(days=1)

    if not missed:
        return False

    logging.info(f"🔍 Found {len(missed)} missed active days. Backfilling...")
    for day in missed:
        commit_for_day(day, count=random.randint(3, 5))
        time.sleep(random.uniform(1, 3))
        
    logging.info("📤 Pushing backfilled commits in batches...")
    return push_safely()

def main():
    logging.info(f"🤖 Daemon started | Project: {PROJECT_DIR}")
    os.chdir(PROJECT_DIR)
    
    while True:
        try:
            if catch_up_missed_days():
                logging.info("✅ Catch-up finished. State saved.")
                save_state(date.today().isoformat())
            else:
                logging.info("✅ Already up-to-date for today.")
                
            now = datetime.now()
            next_run = (now + timedelta(days=1)).replace(hour=START_HOUR, minute=random.randint(0, 59), second=0)
            sleep_sec = max((next_run - now).total_seconds(), 3600)
            logging.info(f"😴 Sleeping {sleep_sec/3600:.1f}h until {next_run.strftime('%d.%m %H:%M')}")
            time.sleep(sleep_sec)
            
        except KeyboardInterrupt:
            logging.info("🛑 Daemon stopped by user.")
            break
        except Exception as e:
            logging.exception(f"❌ Fatal error: {e}")
            time.sleep(60)

if __name__ == "__main__":
    main()