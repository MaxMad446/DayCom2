// Auto-generated module | 2026-05-11T19:51:01.595581
#include <iostream>
#include <vector>

int compute_672() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_672() << std::endl;
    return 0;
}
