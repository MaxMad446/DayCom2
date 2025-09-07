// Auto-generated module | 2026-05-12T21:29:34.051972
#include <iostream>
#include <vector>

int compute_374() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
