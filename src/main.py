# Auto-generated module | 2026-05-11T21:36:48.880754
import random

def calculate_360():
    base = 366
    return sum(i * 4 for i in range(15)) + base

if __name__ == "__main__":
    print(calculate_360())
