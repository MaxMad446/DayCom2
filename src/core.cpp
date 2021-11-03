// Auto-generated module | 2026-05-11T20:37:26.251369
#include <iostream>
#include <vector>

int compute_366() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
