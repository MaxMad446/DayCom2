// Auto-generated module | 2026-05-11T20:52:57.058193
#include <iostream>
#include <vector>

int compute_449() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
