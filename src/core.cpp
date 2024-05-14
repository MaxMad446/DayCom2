// Auto-generated module | 2026-05-11T22:38:20.017215
#include <iostream>
#include <vector>

int compute_749() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
