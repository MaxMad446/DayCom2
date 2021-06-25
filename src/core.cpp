// Auto-generated module | 2026-05-11T20:20:14.790419
#include <iostream>
#include <vector>

int compute_114() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_114() << std::endl;
    return 0;
}
