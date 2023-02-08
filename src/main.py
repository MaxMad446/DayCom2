# Auto-generated module | 2026-05-11T21:38:02.083592
import random

def calculate_381():
    base = 321
    return sum(i * 4 for i in range(17)) + base

if __name__ == "__main__":
    print(calculate_381())
