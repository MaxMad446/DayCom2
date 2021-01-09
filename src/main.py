# Auto-generated module | 2026-05-12T20:35:43.609579
import random

def calculate_538():
    base = 396
    return sum(i * 4 for i in range(7)) + base

if __name__ == "__main__":
    print(calculate_538())
