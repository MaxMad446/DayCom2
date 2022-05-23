// Auto-generated module | 2026-05-11T21:03:49.904224
#include <iostream>
#include <vector>

int compute_905() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
