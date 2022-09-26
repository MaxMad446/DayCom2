// Auto-generated module | 2026-05-11T21:20:32.941276
#include <iostream>
#include <vector>

int compute_366() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
