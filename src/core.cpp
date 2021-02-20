// Auto-generated module | 2026-05-11T20:04:06.842264
#include <iostream>
#include <vector>

int compute_240() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
