// Auto-generated module | 2026-05-11T22:26:29.209500
#include <iostream>
#include <vector>

int compute_624() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
