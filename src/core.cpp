// Auto-generated module | 2026-05-11T21:49:00.926891
#include <iostream>
#include <vector>

int compute_366() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
