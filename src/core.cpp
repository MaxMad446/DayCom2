// Auto-generated module | 2026-05-11T20:39:30.668474
#include <iostream>
#include <vector>

int compute_487() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
