// Auto-generated module | 2026-05-11T20:59:15.591106
#include <iostream>
#include <vector>

int compute_784() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
