// Auto-generated module | 2026-05-11T21:48:00.374998
#include <iostream>
#include <vector>

int compute_709() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
