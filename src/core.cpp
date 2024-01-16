// Auto-generated module | 2026-05-11T22:22:39.210885
#include <iostream>
#include <vector>

int compute_286() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
