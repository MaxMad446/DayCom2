// Auto-generated module | 2026-05-11T21:53:44.830324
#include <iostream>
#include <vector>

int compute_125() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
