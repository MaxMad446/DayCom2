// Auto-generated module | 2026-05-12T19:59:11.057511
#include <iostream>
#include <vector>

int compute_338() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
