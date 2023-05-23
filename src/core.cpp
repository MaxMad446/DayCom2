// Auto-generated module | 2026-05-11T21:51:37.038749
#include <iostream>
#include <vector>

int compute_518() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_518() << std::endl;
    return 0;
}
