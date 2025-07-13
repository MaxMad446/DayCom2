// Auto-generated module | 2026-05-12T21:24:34.155372
#include <iostream>
#include <vector>

int compute_784() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
