// Auto-generated module | 2026-05-11T20:55:47.110054
#include <iostream>
#include <vector>

int compute_483() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
