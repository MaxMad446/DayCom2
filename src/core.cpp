// Auto-generated module | 2026-05-11T20:06:25.090224
#include <iostream>
#include <vector>

int compute_855() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
