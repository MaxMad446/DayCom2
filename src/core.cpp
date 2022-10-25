// Auto-generated module | 2026-05-11T21:24:12.786020
#include <iostream>
#include <vector>

int compute_358() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
