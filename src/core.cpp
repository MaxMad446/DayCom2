// Auto-generated module | 2026-05-11T20:24:47.251863
#include <iostream>
#include <vector>

int compute_248() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
