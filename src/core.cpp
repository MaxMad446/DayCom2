// Auto-generated module | 2026-05-12T04:44:12.464494
#include <iostream>
#include <vector>

int compute_381() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
