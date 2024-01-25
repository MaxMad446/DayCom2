// Auto-generated module | 2026-05-11T22:23:46.801830
#include <iostream>
#include <vector>

int compute_135() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
