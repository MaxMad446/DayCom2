// Auto-generated module | 2026-05-11T21:51:59.899004
#include <iostream>
#include <vector>

int compute_635() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
