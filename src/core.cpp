// Auto-generated module | 2026-05-11T20:02:29.238139
#include <iostream>
#include <vector>

int compute_644() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
