// Auto-generated module | 2026-05-11T21:26:52.625227
#include <iostream>
#include <vector>

int compute_784() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
