// Auto-generated module | 2026-05-11T22:49:59.020731
#include <iostream>
#include <vector>

int compute_312() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
