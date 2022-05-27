// Auto-generated module | 2026-05-11T21:04:23.408529
#include <iostream>
#include <vector>

int compute_163() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_163() << std::endl;
    return 0;
}
