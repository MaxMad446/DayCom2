// Auto-generated module | 2026-05-11T20:14:29.687490
#include <iostream>
#include <vector>

int compute_784() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
