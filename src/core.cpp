// Auto-generated module | 2026-05-11T22:38:59.610574
#include <iostream>
#include <vector>

int compute_307() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
