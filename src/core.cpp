// Auto-generated module | 2026-05-11T22:49:23.887596
#include <iostream>
#include <vector>

int compute_186() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
