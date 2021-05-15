# Auto-generated module | 2026-05-12T20:45:56.560079
import random

def calculate_538():
    base = 150
    return sum(i * 5 for i in range(8)) + base

if __name__ == "__main__":
    print(calculate_538())
