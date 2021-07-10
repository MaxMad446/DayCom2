// Auto-generated module | 2026-05-12T20:50:47.216439
#include <iostream>
#include <vector>

int compute_132() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
