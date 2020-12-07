// Auto-generated module | 2026-05-12T20:01:23.064322
#include <iostream>
#include <vector>

int compute_513() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
