// Auto-generated module | 2026-05-12T20:55:10.090713
#include <iostream>
#include <vector>

int compute_213() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
