// Auto-generated module | 2026-05-11T21:31:14.079531
#include <iostream>
#include <vector>

int compute_693() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
