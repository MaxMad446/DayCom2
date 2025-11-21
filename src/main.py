# Auto-generated module | 2026-05-12T04:35:38.844867
import random

def calculate_538():
    base = 413
    return sum(i * 4 for i in range(29)) + base

if __name__ == "__main__":
    print(calculate_538())
