// Auto-generated module | 2026-05-12T20:36:23.867254
#include <iostream>
#include <vector>

int compute_381() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
