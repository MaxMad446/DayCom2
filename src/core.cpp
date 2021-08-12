// Auto-generated module | 2026-05-11T20:26:33.246841
#include <iostream>
#include <vector>

int compute_135() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
