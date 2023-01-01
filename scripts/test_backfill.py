import os
import subprocess
import time
import random
from datetime import datetime, timedelta

# ================= НАСТРОЙКИ ТЕСТА =================
PROJECT_DIR = r"C:\Users\Maxim\Desktop\Project\DayCom2"
SCRIPTS_DIR = os.path.join(PROJECT_DIR, "scripts")

# Диапазон для проверки
START_DATE = datetime(2023, 1, 1)
END_DATE   = datetime(2023, 5, 31)

# Автоматическое определение часового пояса (формат +HHMM, совместимый с Git)
LOCAL_TZ = datetime.now().astimezone().strftime('%z')

COMMIT_MESSAGES = [
    "Update config files", "Refactor utility functions", 
    "Fix edge case logic", "Add documentation", "Optimize loops"
]
# ====================================================

def run_cmd(cmd, cwd=None, env=None):
    """Запуск команды с поддержкой кастомных переменных окружения"""
    if cwd is None: cwd = PROJECT_DIR
    full_env = os.environ.copy()
    if env: full_env.update(env)
    
    res = subprocess.run(
        cmd, shell=True, cwd=cwd, capture_output=True, text=True, encoding='utf-8', env=full_env
    )
    if res.returncode != 0:
        print(f"❌ Ошибка: {res.stderr.strip()}")
        return False
    return True

def main():
    os.chdir(PROJECT_DIR)
    print(f"🔍 Тестовый бэкфилл: {START_DATE.strftime('%d.%m')} → {END_DATE.strftime('%d.%m')}")
    print(f"🌍 Часовой пояс: {LOCAL_TZ}")
    print("⚠️  Нажмите Enter для старта (Ctrl+C для отмены)...")
    input()

    current = START_DATE
    while current <= END_DATE:
        day_str = current.strftime("%Y-%m-%d")
        commits_count = random.randint(3, 5)
        print(f"\n📅 День: {day_str} | Коммитов: {commits_count}")

        for i in range(commits_count):
            # Случайное время в рабочее окно (09:00 - 18:00)
            hour = random.randint(9, 18)
            minute = random.randint(0, 59)
            second = random.randint(0, 59)
            target_dt = current.replace(hour=hour, minute=minute, second=second)
            # Формат, который Git понимает идеально
            git_date = target_dt.strftime(f"%Y-%m-%dT%H:%M:%S{LOCAL_TZ}")

            # 1. Генерация файлов
            gen_script = os.path.join(SCRIPTS_DIR, "generate_code.py")
            if os.path.exists(gen_script):
                run_cmd(f'python "{gen_script}"', cwd=SCRIPTS_DIR)
            else:
                dummy = os.path.join(PROJECT_DIR, f"test_{day_str}_{i}.txt")
                with open(dummy, 'w', encoding='utf-8') as f:
                    f.write(f"Backfill test {day_str}\n")

            # 2. Stage
            run_cmd("git add .")

            # 3. Commit с принудительными датами
            env_dates = {
                "GIT_AUTHOR_DATE": git_date,
                "GIT_COMMITTER_DATE": git_date
            }
            msg = random.choice(COMMIT_MESSAGES)
            run_cmd(f'git commit -m "{msg}"', env=env_dates)

            # Небольшая задержка, чтобы Git не ругался на слишком быстрые коммиты
            time.sleep(random.uniform(0.5, 1.5))

        current += timedelta(days=1)

    # ✅ ПРОВЕРКА ПЕРЕД ПУШЕМ
    print("\n🔎 Проверка дат в локальном логе (Author vs Committer):")
    run_cmd('git log --oneline --format="%h | Author: %ai | Committer: %ci | %s" -10')
    
    print("\n📤 Отправка на GitHub...")
    if run_cmd("git push origin main"):
        print("✅ Успешно! Проверьте график Contributions на GitHub.")
    else:
        print("❌ Ошибка пуша. Проверьте подключение/токен и повторите `git push origin main` вручную.")

if __name__ == "__main__":
    main()