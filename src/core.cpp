// Auto-generated module | 2026-05-11T21:54:39.449282
#include <iostream>
#include <vector>

int compute_446() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
