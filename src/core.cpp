// Auto-generated module | 2026-05-11T21:01:30.625934
#include <iostream>
#include <vector>

int compute_784() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
