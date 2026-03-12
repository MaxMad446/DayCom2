import os
import subprocess
import random
from datetime import datetime, timedelta

PROJECT_DIR = r"C:\Users\Maxim\Desktop\Project\DayCom2"
os.chdir(PROJECT_DIR)

# Проверка email перед стартом
email = subprocess.check_output("git config user.email", shell=True).decode().strip()
print(f"📧 Git email: {email}")
if not email:
    print("❌ user.email не настроен! График не окрасится.")
    exit(1)

def run(cmd, env=None):
    full_env = os.environ.copy()
    if env: full_env.update(env)
    res = subprocess.run(cmd, shell=True, capture_output=True, text=True, env=full_env)
    if res.returncode != 0: print(f"❌ {res.stderr.strip()}"); return False
    return True

def get_git_date(dt):
    # ISO 8601 с двоеточием в таймзоне: 2026-03-12T14:30:00+03:00
    tz = datetime.now().astimezone().strftime("%z")
    return f"{dt.strftime('%Y-%m-%dT%H:%M:%S')}{tz[:3]}:{tz[3:]}"

TEST_DAYS = [datetime(2026, 3, 12), datetime(2026, 3, 13)]

for day in TEST_DAYS:
    # 1. Создаём уникальные файлы, чтобы Git точно зафиксировал изменения
    for i in range(2):
        fname = f"verify_{day.strftime('%m%d')}_{i}.txt"
        with open(os.path.join(PROJECT_DIR, fname), "w", encoding="utf-8") as f:
            f.write(f"Backfill test {day.date()}\n")
        run("git add .")

    # 2. Коммит с точными датами
    dt = day.replace(hour=random.randint(10,17), minute=random.randint(0,59))
    env = {
        "GIT_AUTHOR_DATE": get_git_date(dt),
        "GIT_COMMITTER_DATE": get_git_date(dt)
    }
    run(f'git commit -m "Test backfill for {day.date()}"', env=env)

# 🔎 ПРОВЕРКА ДО ПУША
print("\n📊 Локальный лог (Author Date / Committer Date):")
subprocess.run('git log --oneline --format="%h | Author: %ai | Committer: %ci | %s" -4', shell=True)

print("\n📤 Отправка на GitHub...")
if run("git push origin main"):
    print("✅ Пуш успешен! GitHub обновит график в течение 5-24 часов.")
else:
    print("❌ Ошибка пуша.")