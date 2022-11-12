// Auto-generated module | 2026-05-11T21:26:36.704401
#include <iostream>
#include <vector>

int compute_348() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_348() << std::endl;
    return 0;
}
