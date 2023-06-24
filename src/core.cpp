// Auto-generated module | 2026-05-11T21:55:44.144394
#include <iostream>
#include <vector>

int compute_633() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
