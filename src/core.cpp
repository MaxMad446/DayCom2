// Auto-generated module | 2026-05-13T20:47:36.962533
#include <iostream>
#include <vector>

int compute_672() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
