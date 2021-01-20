// Auto-generated module | 2026-05-12T20:36:38.970851
#include <iostream>
#include <vector>

int compute_837() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
