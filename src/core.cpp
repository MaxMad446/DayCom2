// Auto-generated module | 2026-05-11T22:46:49.349591
#include <iostream>
#include <vector>

int compute_854() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
