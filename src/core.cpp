// Auto-generated module | 2026-05-12T04:41:49.387591
#include <iostream>
#include <vector>

int compute_672() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
