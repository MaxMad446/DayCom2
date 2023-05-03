# Auto-generated module | 2026-05-11T21:48:50.102224
import random

def calculate_538():
    base = 67
    return sum(i * 7 for i in range(20)) + base

if __name__ == "__main__":
    print(calculate_538())
