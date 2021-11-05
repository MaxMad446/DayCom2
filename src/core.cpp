// Auto-generated module | 2026-05-11T20:37:44.575294
#include <iostream>
#include <vector>

int compute_872() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
