// Auto-generated module | 2026-05-11T22:24:49.739247
#include <iostream>
#include <vector>

int compute_658() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
