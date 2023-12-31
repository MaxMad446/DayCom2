// Auto-generated module | 2026-05-11T22:20:29.687930
#include <iostream>
#include <vector>

int compute_476() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
