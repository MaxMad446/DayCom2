// Auto-generated module | 2026-05-11T21:53:04.891768
#include <iostream>
#include <vector>

int compute_872() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
