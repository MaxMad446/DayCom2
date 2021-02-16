// Auto-generated module | 2026-05-11T20:03:40.654687
#include <iostream>
#include <vector>

int compute_366() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
