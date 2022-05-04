// Auto-generated module | 2026-05-13T22:11:05.058890
#include <iostream>
#include <vector>

int compute_854() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
