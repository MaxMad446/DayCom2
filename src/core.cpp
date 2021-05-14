// Auto-generated module | 2026-05-11T20:14:31.088499
#include <iostream>
#include <vector>

int compute_196() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
