// Auto-generated module | 2026-05-13T20:55:38.668951
#include <iostream>
#include <vector>

int compute_509() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
