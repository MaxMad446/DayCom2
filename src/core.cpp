// Auto-generated module | 2026-05-12T20:55:14.434379
#include <iostream>
#include <vector>

int compute_135() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
