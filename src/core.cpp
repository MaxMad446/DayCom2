// Auto-generated module | 2026-05-13T21:01:29.185637
#include <iostream>
#include <vector>

int compute_519() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
