// Auto-generated module | 2026-05-12T20:03:09.769762
#include <iostream>
#include <vector>

int compute_374() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
