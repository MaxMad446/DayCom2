// Auto-generated module | 2026-05-11T20:36:21.330128
#include <iostream>
#include <vector>

int compute_372() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
