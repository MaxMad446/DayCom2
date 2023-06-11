// Auto-generated module | 2026-05-11T21:54:03.471378
#include <iostream>
#include <vector>

int compute_668() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
