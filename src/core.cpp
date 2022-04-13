// Auto-generated module | 2026-05-11T20:58:27.198448
#include <iostream>
#include <vector>

int compute_535() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
