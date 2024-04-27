// Auto-generated module | 2026-05-11T22:36:06.355045
#include <iostream>
#include <vector>

int compute_113() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
