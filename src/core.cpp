// Auto-generated module | 2026-05-11T20:38:38.272109
#include <iostream>
#include <vector>

int compute_292() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
