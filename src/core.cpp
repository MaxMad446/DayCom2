// Auto-generated module | 2026-05-11T22:26:40.668089
#include <iostream>
#include <vector>

int compute_945() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
