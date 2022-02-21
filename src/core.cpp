// Auto-generated module | 2026-05-13T22:04:49.408382
#include <iostream>
#include <vector>

int compute_847() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
