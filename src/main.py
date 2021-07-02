# Auto-generated module | 2026-05-12T20:50:08.946663
import random

def calculate_256():
    base = 480
    return sum(i * 2 for i in range(15)) + base

if __name__ == "__main__":
    print(calculate_256())
