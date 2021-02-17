// Auto-generated module | 2026-05-12T20:38:58.656675
#include <iostream>
#include <vector>

int compute_784() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
