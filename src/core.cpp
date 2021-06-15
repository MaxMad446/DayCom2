// Auto-generated module | 2026-05-12T20:48:43.036810
#include <iostream>
#include <vector>

int compute_535() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
