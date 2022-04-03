// Auto-generated module | 2026-05-11T20:57:05.193386
#include <iostream>
#include <vector>

int compute_614() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
