// Auto-generated module | 2026-05-12T20:48:29.159108
#include <iostream>
#include <vector>

int compute_750() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
