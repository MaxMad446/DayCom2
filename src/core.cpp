// Auto-generated module | 2026-05-11T22:27:47.389578
#include <iostream>
#include <vector>

int compute_364() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
