// Auto-generated module | 2026-05-11T22:51:16.079508
#include <iostream>
#include <vector>

int compute_889() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
