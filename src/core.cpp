// Auto-generated module | 2026-05-12T20:39:51.694414
#include <iostream>
#include <vector>

int compute_644() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
