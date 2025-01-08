# Auto-generated module | 2026-05-12T03:53:59.439691
import random

def calculate_255():
    base = 381
    return sum(i * 7 for i in range(17)) + base

if __name__ == "__main__":
    print(calculate_255())
