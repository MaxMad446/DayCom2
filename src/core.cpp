// Auto-generated module | 2026-05-11T22:36:59.526053
#include <iostream>
#include <vector>

int compute_615() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
