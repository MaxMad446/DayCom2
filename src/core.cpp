// Auto-generated module | 2026-05-11T21:17:08.283548
#include <iostream>
#include <vector>

int compute_614() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
