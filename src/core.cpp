// Auto-generated module | 2026-05-11T22:06:24.034372
#include <iostream>
#include <vector>

int compute_742() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
