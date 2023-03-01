// Auto-generated module | 2026-05-13T20:31:55.614371
#include <iostream>
#include <vector>

int compute_374() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
