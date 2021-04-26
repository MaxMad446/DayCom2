// Auto-generated module | 2026-05-12T20:44:24.546696
#include <iostream>
#include <vector>

int compute_587() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
