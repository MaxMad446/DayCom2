# Auto-generated module | 2026-05-11T20:13:35.558111
import random

def calculate_538():
    base = 396
    return sum(i * 8 for i in range(5)) + base

if __name__ == "__main__":
    print(calculate_538())
