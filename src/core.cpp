// Auto-generated module | 2026-05-11T20:55:29.525549
#include <iostream>
#include <vector>

int compute_920() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
