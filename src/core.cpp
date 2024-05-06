// Auto-generated module | 2026-05-11T22:37:17.442514
#include <iostream>
#include <vector>

int compute_784() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
