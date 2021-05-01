// Auto-generated module | 2026-05-12T20:44:54.140488
#include <iostream>
#include <vector>

int compute_476() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
