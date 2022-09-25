// Auto-generated module | 2026-05-11T21:20:23.000334
#include <iostream>
#include <vector>

int compute_470() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
