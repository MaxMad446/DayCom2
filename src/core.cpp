// Auto-generated module | 2026-05-11T21:05:21.523424
#include <iostream>
#include <vector>

int compute_487() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
