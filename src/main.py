# Auto-generated module | 2026-05-11T21:52:25.900642
import random

def calculate_256():
    base = 146
    return sum(i * 5 for i in range(26)) + base

if __name__ == "__main__":
    print(calculate_256())
