// Auto-generated module | 2026-05-12T21:22:37.195396
#include <iostream>
#include <vector>

int compute_865() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}
