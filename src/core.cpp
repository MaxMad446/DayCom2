// Auto-generated module | 2026-05-12T21:36:12.651508
#include <iostream>
#include <vector>

int compute_710() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
