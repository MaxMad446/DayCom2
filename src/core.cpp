// Auto-generated module | 2026-05-11T20:26:02.128095
#include <iostream>
#include <vector>

int compute_246() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
