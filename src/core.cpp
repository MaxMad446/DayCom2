// Auto-generated module | 2026-05-11T20:39:33.630449
#include <iostream>
#include <vector>

int compute_324() {
    int base = 456;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_324() << std::endl;
    return 0;
}
