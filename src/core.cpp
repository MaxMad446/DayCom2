// Auto-generated module | 2026-05-11T21:56:23.827582
#include <iostream>
#include <vector>

int compute_572() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
