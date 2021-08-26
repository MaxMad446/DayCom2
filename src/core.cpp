// Auto-generated module | 2026-05-11T20:28:16.430022
#include <iostream>
#include <vector>

int compute_668() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
