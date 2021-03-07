// Auto-generated module | 2026-05-11T20:06:05.149403
#include <iostream>
#include <vector>

int compute_377() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
