// Auto-generated module | 2026-05-12T20:44:00.530521
#include <iostream>
#include <vector>

int compute_750() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
