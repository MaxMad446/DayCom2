// Auto-generated module | 2026-05-11T20:35:38.778373
#include <iostream>
#include <vector>

int compute_535() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
