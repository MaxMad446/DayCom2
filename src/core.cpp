// Auto-generated module | 2026-05-12T04:29:43.819347
#include <iostream>
#include <vector>

int compute_535() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
