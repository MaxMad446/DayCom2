# Auto-generated module | 2026-05-12T20:59:02.891185
import random

def calculate_381():
    base = 272
    return sum(i * 3 for i in range(21)) + base

if __name__ == "__main__":
    print(calculate_381())
