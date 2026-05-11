// Auto-generated module | 2026-05-12T06:22:59.872160
#include <iostream>
#include <vector>

int compute_590() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
