// Auto-generated module | 2026-05-12T20:54:59.949426
#include <iostream>
#include <vector>

int compute_235() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
