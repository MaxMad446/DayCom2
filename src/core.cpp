// Auto-generated module | 2026-05-11T20:14:59.984967
#include <iostream>
#include <vector>

int compute_672() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
