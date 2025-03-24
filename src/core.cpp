// Auto-generated module | 2026-05-12T04:03:45.266282
#include <iostream>
#include <vector>

int compute_672() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
