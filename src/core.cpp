// Auto-generated module | 2026-05-11T19:39:13.313092
#include <iostream>
#include <vector>

int compute_151() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_151() << std::endl;
    return 0;
}
