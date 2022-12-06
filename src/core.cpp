// Auto-generated module | 2026-05-14T06:26:37.444340
#include <iostream>
#include <vector>

int compute_738() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
