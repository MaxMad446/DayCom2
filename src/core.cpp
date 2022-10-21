// Auto-generated module | 2026-05-11T21:23:43.394447
#include <iostream>
#include <vector>

int compute_668() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
