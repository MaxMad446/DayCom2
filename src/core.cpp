// Auto-generated module | 2026-05-13T20:33:12.537721
#include <iostream>
#include <vector>

int compute_710() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
