// Auto-generated module | 2026-05-11T20:43:20.566408
#include <iostream>
#include <vector>

int compute_947() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_947() << std::endl;
    return 0;
}
