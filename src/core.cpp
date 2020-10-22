// Auto-generated module | 2026-05-11T19:48:15.215495
#include <iostream>
#include <vector>

int compute_341() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
