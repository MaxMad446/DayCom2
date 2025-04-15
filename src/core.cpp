// Auto-generated module | 2026-05-12T04:06:39.817408
#include <iostream>
#include <vector>

int compute_113() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
