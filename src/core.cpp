// Auto-generated module | 2026-05-11T20:49:26.026022
#include <iostream>
#include <vector>

int compute_654() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
