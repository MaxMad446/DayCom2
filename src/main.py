# Auto-generated module | 2026-05-13T20:52:27.314341
import random

def calculate_365():
    base = 473
    return sum(i * 3 for i in range(17)) + base

if __name__ == "__main__":
    print(calculate_365())
