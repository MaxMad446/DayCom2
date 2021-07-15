// Auto-generated module | 2026-05-11T20:22:59.001447
#include <iostream>
#include <vector>

int compute_478() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
