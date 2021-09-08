// Auto-generated module | 2026-05-12T20:55:57.391953
#include <iostream>
#include <vector>

int compute_399() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
