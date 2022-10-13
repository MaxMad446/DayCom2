// Auto-generated module | 2026-05-11T21:22:42.845537
#include <iostream>
#include <vector>

int compute_300() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
