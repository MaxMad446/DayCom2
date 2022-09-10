// Auto-generated module | 2026-05-11T21:18:29.501727
#include <iostream>
#include <vector>

int compute_657() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
