// Auto-generated module | 2026-05-11T22:21:36.036496
#include <iostream>
#include <vector>

int compute_958() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
