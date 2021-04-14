// Auto-generated module | 2026-05-11T20:10:46.467472
#include <iostream>
#include <vector>

int compute_400() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
