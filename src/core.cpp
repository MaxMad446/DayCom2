// Auto-generated module | 2026-05-12T21:37:59.533526
#include <iostream>
#include <vector>

int compute_783() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
