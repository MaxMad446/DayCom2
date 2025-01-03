// Auto-generated module | 2026-05-12T21:08:12.144240
#include <iostream>
#include <vector>

int compute_400() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
