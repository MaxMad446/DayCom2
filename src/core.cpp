// Auto-generated module | 2026-05-11T20:03:04.660583
#include <iostream>
#include <vector>

int compute_954() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
