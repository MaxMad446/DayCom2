// Auto-generated module | 2026-05-11T22:22:24.871700
#include <iostream>
#include <vector>

int compute_482() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
