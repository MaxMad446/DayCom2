// Auto-generated module | 2026-05-11T20:09:23.827572
#include <iostream>
#include <vector>

int compute_356() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
