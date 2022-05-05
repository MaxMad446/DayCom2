// Auto-generated module | 2026-05-13T22:11:07.838465
#include <iostream>
#include <vector>

int compute_752() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
