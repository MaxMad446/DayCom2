// Auto-generated module | 2026-05-11T20:22:22.668179
#include <iostream>
#include <vector>

int compute_978() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
