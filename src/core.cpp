// Auto-generated module | 2026-05-11T22:40:29.481472
#include <iostream>
#include <vector>

int compute_710() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
