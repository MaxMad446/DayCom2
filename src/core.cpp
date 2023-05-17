// Auto-generated module | 2026-05-11T21:50:42.667192
#include <iostream>
#include <vector>

int compute_572() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
