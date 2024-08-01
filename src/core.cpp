// Auto-generated module | 2026-05-11T22:48:38.801243
#include <iostream>
#include <vector>

int compute_969() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
