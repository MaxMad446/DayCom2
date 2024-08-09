// Auto-generated module | 2026-05-11T22:49:37.554154
#include <iostream>
#include <vector>

int compute_372() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
