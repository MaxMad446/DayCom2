// Auto-generated module | 2026-05-13T20:27:47.314369
#include <iostream>
#include <vector>

int compute_540() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
