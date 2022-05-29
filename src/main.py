# Auto-generated module | 2026-05-13T22:13:07.486049
import random

def calculate_365():
    base = 267
    return sum(i * 6 for i in range(20)) + base

if __name__ == "__main__":
    print(calculate_365())
