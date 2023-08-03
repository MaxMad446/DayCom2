// Auto-generated module | 2026-05-13T20:51:26.266881
#include <iostream>
#include <vector>

int compute_557() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_557() << std::endl;
    return 0;
}
