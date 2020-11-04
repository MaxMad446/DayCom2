// Auto-generated module | 2026-05-12T19:58:43.930993
#include <iostream>
#include <vector>

int compute_672() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
