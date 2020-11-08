# Auto-generated module | 2026-05-14T18:05:17.247746
import random

def calculate_256():
    base = 320
    return sum(i * 4 for i in range(9)) + base

if __name__ == "__main__":
    print(calculate_256())
