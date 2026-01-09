// Auto-generated module | 2026-05-12T04:42:28.770341
#include <iostream>
#include <vector>

int compute_535() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
