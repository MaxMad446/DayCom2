// Auto-generated module | 2026-05-14T18:20:40.970280
#include <iostream>
#include <vector>

int compute_668() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
