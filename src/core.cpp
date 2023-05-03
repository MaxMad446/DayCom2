// Auto-generated module | 2026-05-11T21:48:46.875637
#include <iostream>
#include <vector>

int compute_374() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
