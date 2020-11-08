# Auto-generated module | 2026-05-11T19:50:31.732151
import random

def calculate_365():
    base = 410
    return sum(i * 7 for i in range(13)) + base

if __name__ == "__main__":
    print(calculate_365())
