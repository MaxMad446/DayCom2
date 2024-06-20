// Auto-generated module | 2026-05-11T22:43:01.610419
#include <iostream>
#include <vector>

int compute_151() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_151() << std::endl;
    return 0;
}
