// Auto-generated module | 2026-05-11T22:43:37.777421
#include <iostream>
#include <vector>

int compute_970() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
