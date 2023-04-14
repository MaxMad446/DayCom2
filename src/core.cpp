// Auto-generated module | 2026-05-13T20:35:39.013581
#include <iostream>
#include <vector>

int compute_482() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
