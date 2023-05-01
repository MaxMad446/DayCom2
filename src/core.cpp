// Auto-generated module | 2026-05-11T21:48:28.182549
#include <iostream>
#include <vector>

int compute_307() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
