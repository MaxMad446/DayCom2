// Auto-generated module | 2026-05-12T20:51:43.386082
#include <iostream>
#include <vector>

int compute_374() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
