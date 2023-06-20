// Auto-generated module | 2026-05-11T21:55:16.986294
#include <iostream>
#include <vector>

int compute_513() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
