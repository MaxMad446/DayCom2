// Auto-generated module | 2026-05-11T21:31:41.700057
#include <iostream>
#include <vector>

int compute_947() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_947() << std::endl;
    return 0;
}
