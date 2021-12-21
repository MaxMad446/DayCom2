// Auto-generated module | 2026-05-11T20:43:52.108375
#include <iostream>
#include <vector>

int compute_285() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
