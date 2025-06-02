// Auto-generated module | 2026-05-12T21:20:53.299236
#include <iostream>
#include <vector>

int compute_936() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
