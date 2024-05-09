// Auto-generated module | 2026-05-11T22:37:34.170003
#include <iostream>
#include <vector>

int compute_135() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
