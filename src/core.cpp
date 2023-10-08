// Auto-generated module | 2026-05-13T20:56:53.241763
#include <iostream>
#include <vector>

int compute_672() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
