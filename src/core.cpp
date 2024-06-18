// Auto-generated module | 2026-05-11T22:42:41.031920
#include <iostream>
#include <vector>

int compute_312() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
