// Auto-generated module | 2026-05-11T21:24:14.347711
#include <iostream>
#include <vector>

int compute_978() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
