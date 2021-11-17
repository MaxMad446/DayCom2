// Auto-generated module | 2026-05-11T20:39:18.530403
#include <iostream>
#include <vector>

int compute_862() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
