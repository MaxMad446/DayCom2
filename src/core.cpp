// Auto-generated module | 2026-05-12T06:22:57.149492
#include <iostream>
#include <vector>

int compute_364() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
