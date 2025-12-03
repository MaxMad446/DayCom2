// Auto-generated module | 2026-05-12T04:37:23.626637
#include <iostream>
#include <vector>

int compute_104() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_104() << std::endl;
    return 0;
}
