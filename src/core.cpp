// Auto-generated module | 2026-05-11T21:29:50.091020
#include <iostream>
#include <vector>

int compute_771() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
