// Auto-generated module | 2026-05-13T21:01:23.537726
#include <iostream>
#include <vector>

int compute_322() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
