# Auto-generated module | 2026-05-12T03:47:03.769272
import random

def calculate_365():
    base = 413
    return sum(i * 5 for i in range(22)) + base

if __name__ == "__main__":
    print(calculate_365())
