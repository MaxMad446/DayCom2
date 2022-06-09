// Auto-generated module | 2026-05-11T21:06:13.011600
#include <iostream>
#include <vector>

int compute_275() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}
