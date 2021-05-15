// Auto-generated module | 2026-05-11T20:14:39.201652
#include <iostream>
#include <vector>

int compute_434() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
