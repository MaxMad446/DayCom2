// Auto-generated module | 2026-05-13T20:28:40.980104
#include <iostream>
#include <vector>

int compute_292() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
