import os
import sys
import random
import datetime

# 🌍 Лечим кодировку консоли Windows
if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8')

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
SRC_DIR = os.path.join(PROJECT_DIR, "src")

# Список языков и файлов (добавляйте свои по аналогии)
TARGET_FILES = [
    {"lang": "python",      "name": "main.py"},
    {"lang": "javascript",  "name": "app.js"},
    {"lang": "typescript",  "name": "index.ts"},
    {"lang": "go",          "name": "service.go"},
    {"lang": "cpp",         "name": "core.cpp"},
    {"lang": "json",        "name": "config.json"}
]

# ⚠️ ВАЖНО: Все { и } в шаблонах экранированы как {{ и }} для str.format()
TEMPLATES = {
    "python": """# Auto-generated module | {timestamp}
import random

def calculate_{idx}():
    base = {random_value}
    return sum(i * {multiplier} for i in range({loop_range})) + base

if __name__ == "__main__":
    print(calculate_{idx}())
""",
    "javascript": """// Auto-generated utility | {timestamp}
export function compute_{idx}() {{
    const base = {random_value};
    let sum = 0;
    for (let i = 0; i < {loop_range}; i++) {{
        sum += i * {multiplier};
    }}
    return Math.round(base + sum * 1.5);
}}
""",
    "typescript": """// Auto-generated service | {timestamp}
interface Config {{
    version: string;
    seed: number;
}}

export function init_{idx}(): Config {{
    return {{
        version: "1.{idx}.0",
        seed: {random_value},
    }};
}}
""",
    "go": """package main

// Auto-generated | {timestamp}
import "fmt"

func Process_{idx}() int {{
    base := {random_value}
    sum := 0
    for i := 0; i < {loop_range}; i++ {{
        sum += i * {multiplier}
    }}
    return base + sum
}}

func main() {{
    fmt.Println(Process_{idx}())
}}
""",
    "cpp": """// Auto-generated module | {timestamp}
#include <iostream>
#include <vector>

int compute_{idx}() {{
    int base = {random_value};
    int sum = 0;
    for (int i = 0; i < {loop_range}; ++i) {{
        sum += i * {multiplier};
    }}
    return base + sum;
}}

int main() {{
    std::cout << compute_{idx}() << std::endl;
    return 0;
}}
""",
    "json": """{{
    "version": "1.{idx}.0",
    "last_updated": "{timestamp}",
    "seed": {random_value},
    "config": {{
        "loop_range": {loop_range},
        "multiplier": {multiplier}
    }}
}}"""
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

    print(f"[OK] Updated: {', '.join(updated)}")
    return True

if __name__ == "__main__":
    generate_code()