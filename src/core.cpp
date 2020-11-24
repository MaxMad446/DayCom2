// Auto-generated module | 2026-05-12T20:00:15.988798
#include <iostream>
#include <vector>

int compute_374() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
