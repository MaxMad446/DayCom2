# Auto-generated module | 2026-05-11T20:14:29.686280
import random

def calculate_365():
    base = 472
    return sum(i * 6 for i in range(12)) + base

if __name__ == "__main__":
    print(calculate_365())
