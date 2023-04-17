// Auto-generated module | 2026-05-11T21:46:35.530660
#include <iostream>
#include <vector>

int compute_738() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
