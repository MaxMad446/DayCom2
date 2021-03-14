// Auto-generated module | 2026-05-12T21:36:34.481638
#include <iostream>
#include <vector>

int compute_672() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
