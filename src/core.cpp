// Auto-generated module | 2026-05-12T21:05:34.829882
#include <iostream>
#include <vector>

int compute_668() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
