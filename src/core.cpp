// Auto-generated module | 2026-05-11T20:47:34.569651
#include <iostream>
#include <vector>

int compute_125() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
