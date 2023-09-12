// Auto-generated module | 2026-05-13T20:54:44.802048
#include <iostream>
#include <vector>

int compute_149() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
