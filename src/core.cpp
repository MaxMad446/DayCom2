// Auto-generated module | 2026-05-11T20:56:59.510044
#include <iostream>
#include <vector>

int compute_806() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_806() << std::endl;
    return 0;
}
