// Auto-generated module | 2026-05-11T22:11:16.457372
#include <iostream>
#include <vector>

int compute_934() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_934() << std::endl;
    return 0;
}
