// Auto-generated module | 2026-05-11T20:54:47.586885
#include <iostream>
#include <vector>

int compute_560() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
