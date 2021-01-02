// Auto-generated module | 2026-05-12T20:35:13.513025
#include <iostream>
#include <vector>

int compute_166() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
