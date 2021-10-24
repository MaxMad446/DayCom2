// Auto-generated module | 2026-05-12T20:59:49.400987
#include <iostream>
#include <vector>

int compute_784() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
