// Auto-generated module | 2026-05-11T20:55:24.797440
#include <iostream>
#include <vector>

int compute_899() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
