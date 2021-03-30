// Auto-generated module | 2026-05-11T20:08:54.079234
#include <iostream>
#include <vector>

int compute_672() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
