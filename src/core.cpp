// Auto-generated module | 2026-05-12T21:15:24.729224
#include <iostream>
#include <vector>

int compute_345() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
