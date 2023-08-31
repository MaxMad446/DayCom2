// Auto-generated module | 2026-05-11T22:04:33.823969
#include <iostream>
#include <vector>

int compute_714() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}
