// Auto-generated module | 2026-05-11T21:14:14.757908
#include <iostream>
#include <vector>

int compute_585() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
