// Auto-generated module | 2026-05-13T20:30:47.577095
#include <iostream>
#include <vector>

int compute_614() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
