// Auto-generated module | 2026-05-12T20:35:38.718704
#include <iostream>
#include <vector>

int compute_854() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
