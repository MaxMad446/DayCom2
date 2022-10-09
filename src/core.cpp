// Auto-generated module | 2026-05-11T21:22:09.867020
#include <iostream>
#include <vector>

int compute_889() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
