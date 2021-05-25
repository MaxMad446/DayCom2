// Auto-generated module | 2026-05-11T20:15:59.773358
#include <iostream>
#include <vector>

int compute_105() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
