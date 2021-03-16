// Auto-generated module | 2026-05-11T20:07:10.614125
#include <iostream>
#include <vector>

int compute_784() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
