// Auto-generated module | 2026-05-11T22:43:44.508038
#include <iostream>
#include <vector>

int compute_402() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
