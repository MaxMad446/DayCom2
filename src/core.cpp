// Auto-generated module | 2026-05-12T20:54:23.922845
#include <iostream>
#include <vector>

int compute_701() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
