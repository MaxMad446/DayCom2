# Auto-generated module | 2026-05-11T22:27:41.735079
import random

def calculate_381():
    base = 461
    return sum(i * 4 for i in range(13)) + base

if __name__ == "__main__":
    print(calculate_381())
