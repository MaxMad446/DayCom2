// Auto-generated module | 2026-05-11T21:25:29.026095
#include <iostream>
#include <vector>

int compute_906() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
