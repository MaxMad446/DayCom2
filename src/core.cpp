// Auto-generated module | 2026-05-13T20:56:24.635556
#include <iostream>
#include <vector>

int compute_510() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
