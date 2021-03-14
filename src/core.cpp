// Auto-generated module | 2026-05-12T20:40:57.343493
#include <iostream>
#include <vector>

int compute_486() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
