// Auto-generated module | 2026-05-11T21:44:37.001448
#include <iostream>
#include <vector>

int compute_516() {
    int base = 456;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}
