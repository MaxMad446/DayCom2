// Auto-generated module | 2026-05-11T21:32:29.577555
#include <iostream>
#include <vector>

int compute_837() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
