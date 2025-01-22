// Auto-generated module | 2026-05-12T03:55:46.185033
#include <iostream>
#include <vector>

int compute_672() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
