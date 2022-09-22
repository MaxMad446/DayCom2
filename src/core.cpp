// Auto-generated module | 2026-05-11T21:20:00.985596
#include <iostream>
#include <vector>

int compute_535() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
