# Auto-generated module | 2026-05-13T22:06:05.750979
import random

def calculate_256():
    base = 380
    return sum(i * 4 for i in range(19)) + base

if __name__ == "__main__":
    print(calculate_256())
