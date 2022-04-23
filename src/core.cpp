// Auto-generated module | 2026-05-11T20:59:47.510560
#include <iostream>
#include <vector>

int compute_891() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
