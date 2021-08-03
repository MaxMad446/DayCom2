// Auto-generated module | 2026-05-11T20:25:27.794264
#include <iostream>
#include <vector>

int compute_668() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
