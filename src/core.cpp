// Auto-generated module | 2026-05-11T21:20:49.283334
#include <iostream>
#include <vector>

int compute_298() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
