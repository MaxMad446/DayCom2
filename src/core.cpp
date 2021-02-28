// Auto-generated module | 2026-05-11T20:05:11.311416
#include <iostream>
#include <vector>

int compute_905() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
