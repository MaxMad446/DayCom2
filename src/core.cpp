// Auto-generated module | 2026-05-12T04:04:38.558758
#include <iostream>
#include <vector>

int compute_580() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
