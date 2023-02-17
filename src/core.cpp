// Auto-generated module | 2026-05-13T20:30:55.110178
#include <iostream>
#include <vector>

int compute_476() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
