// Auto-generated module | 2026-05-11T20:29:27.238785
#include <iostream>
#include <vector>

int compute_551() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_551() << std::endl;
    return 0;
}
