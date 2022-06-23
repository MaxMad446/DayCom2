// Auto-generated module | 2026-05-11T21:07:53.018265
#include <iostream>
#include <vector>

int compute_854() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
