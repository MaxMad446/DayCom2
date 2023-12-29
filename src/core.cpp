// Auto-generated module | 2026-05-13T21:03:40.533855
#include <iostream>
#include <vector>

int compute_747() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
