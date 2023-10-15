// Auto-generated module | 2026-05-11T22:10:28.672544
#include <iostream>
#include <vector>

int compute_689() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
