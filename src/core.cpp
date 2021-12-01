// Auto-generated module | 2026-05-12T21:03:13.690235
#include <iostream>
#include <vector>

int compute_364() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
