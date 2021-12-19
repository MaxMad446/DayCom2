// Auto-generated module | 2026-05-11T20:43:34.228299
#include <iostream>
#include <vector>

int compute_292() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
