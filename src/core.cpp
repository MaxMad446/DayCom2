// Auto-generated module | 2026-05-11T20:54:42.639098
#include <iostream>
#include <vector>

int compute_366() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
