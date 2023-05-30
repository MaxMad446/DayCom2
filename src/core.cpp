// Auto-generated module | 2026-05-13T20:39:24.840900
#include <iostream>
#include <vector>

int compute_549() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
