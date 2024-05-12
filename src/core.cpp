// Auto-generated module | 2026-05-11T22:37:59.019823
#include <iostream>
#include <vector>

int compute_116() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
