// Auto-generated module | 2026-05-13T22:04:59.510514
#include <iostream>
#include <vector>

int compute_526() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
