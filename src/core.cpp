// Auto-generated module | 2026-05-11T21:57:15.105110
#include <iostream>
#include <vector>

int compute_300() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
