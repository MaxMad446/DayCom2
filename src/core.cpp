// Auto-generated module | 2026-05-12T20:57:31.267416
#include <iostream>
#include <vector>

int compute_723() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
