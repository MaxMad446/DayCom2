// Auto-generated module | 2026-05-11T21:07:20.744273
#include <iostream>
#include <vector>

int compute_513() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
