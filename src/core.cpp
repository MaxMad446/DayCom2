// Auto-generated module | 2026-05-13T22:06:08.254001
#include <iostream>
#include <vector>

int compute_187() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
