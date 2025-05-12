import os
import random
import datetime

# Пути относительно расположения этого скрипта
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
SRC_DIR = os.path.join(PROJECT_DIR, "src")

# Фиксированный набор файлов (перезаписываются, не копятся)
TARGET_FILES = [
    {"lang": "python", "name": "core.py"},
    {"lang": "javascript", "name": "utils.js"},
    {"lang": "json", "name": "config.json"}
]

TEMPLATES = {
    "python": """# Auto-generated module | {timestamp}
import random
import math

def calculate_{idx}():
    \"\"\"Generated function for daily commit.\"\"\"
    base = {random_value}
    result = sum(i * {multiplier} for i in range({loop_range}))
    return math.sqrt(base + result)

if __name__ == "__main__":
    print(calculate_{idx}())
""",
    "javascript": """// Auto-generated utility | {timestamp}
export function compute_{idx}() {
    const base = {random_value};
    let sum = 0;
    for (let i = 0; i < {loop_range}; i++) {
        sum += i * {multiplier};
    }
    return Math.round(base + sum * 1.5);
}
""",
    "json": """{
  "version": "1.{idx}.0",
  "last_updated": "{timestamp}",
  "seed": {random_value},
  "config": {
    "loop_range": {loop_range},
    "multiplier": {multiplier}
  }
}"""
}

def generate_code():
    os.makedirs(SRC_DIR, exist_ok=True)
    updated = []
    
    for f in TARGET_FILES:
        idx = random.randint(100, 999)
        ts = datetime.datetime.now().isoformat()
        val = random.randint(10, 500)
        loop = random.randint(5, 30)
        mult = random.randint(2, 8)
        
        content = TEMPLATES[f["lang"]].format(
            timestamp=ts, idx=idx, random_value=val, loop_range=loop, multiplier=mult
        )
        
        path = os.path.join(SRC_DIR, f["name"])
        with open(path, "w", encoding="utf-8") as file:
            file.write(content)
        updated.append(f["name"])
        
    print(f"✅ Updated: {', '.join(updated)}")
    return True

if __name__ == "__main__":
    generate_code()