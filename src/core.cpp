// Auto-generated module | 2026-05-11T22:26:10.288383
#include <iostream>
#include <vector>

int compute_903() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}
