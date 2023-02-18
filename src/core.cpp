// Auto-generated module | 2026-05-11T21:39:12.035339
#include <iostream>
#include <vector>

int compute_889() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
