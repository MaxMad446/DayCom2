// Auto-generated module | 2026-05-11T20:54:31.034141
#include <iostream>
#include <vector>

int compute_792() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
