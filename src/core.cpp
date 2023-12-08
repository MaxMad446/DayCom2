// Auto-generated module | 2026-05-11T22:17:26.713365
#include <iostream>
#include <vector>

int compute_569() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_569() << std::endl;
    return 0;
}
