// Auto-generated module | 2026-05-11T22:26:49.050544
#include <iostream>
#include <vector>

int compute_780() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
