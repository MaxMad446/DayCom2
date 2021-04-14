// Auto-generated module | 2026-05-12T20:43:26.307435
#include <iostream>
#include <vector>

int compute_287() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
