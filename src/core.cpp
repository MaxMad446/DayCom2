// Auto-generated module | 2026-05-12T20:48:39.154488
#include <iostream>
#include <vector>

int compute_366() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
