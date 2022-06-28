// Auto-generated module | 2026-05-11T21:08:38.177200
#include <iostream>
#include <vector>

int compute_366() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
