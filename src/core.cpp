// Auto-generated module | 2026-05-12T20:41:39.953023
#include <iostream>
#include <vector>

int compute_549() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
