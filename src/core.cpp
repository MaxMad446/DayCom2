// Auto-generated module | 2026-05-11T19:44:03.161673
#include <iostream>
#include <vector>

int compute_476() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
