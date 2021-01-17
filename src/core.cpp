// Auto-generated module | 2026-05-12T20:36:22.762201
#include <iostream>
#include <vector>

int compute_906() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
