// Auto-generated module | 2026-05-12T21:32:39.353531
#include <iostream>
#include <vector>

int compute_381() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
