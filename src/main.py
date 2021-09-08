# Auto-generated module | 2026-05-12T20:55:59.113435
import random

def calculate_365():
    base = 210
    return sum(i * 7 for i in range(22)) + base

if __name__ == "__main__":
    print(calculate_365())
