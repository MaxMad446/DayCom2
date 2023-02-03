// Auto-generated module | 2026-05-11T21:37:23.275284
#include <iostream>
#include <vector>

int compute_312() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
