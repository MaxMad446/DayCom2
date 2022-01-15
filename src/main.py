# Auto-generated module | 2026-05-11T20:47:02.510817
import random

def calculate_538():
    base = 368
    return sum(i * 6 for i in range(13)) + base

if __name__ == "__main__":
    print(calculate_538())
