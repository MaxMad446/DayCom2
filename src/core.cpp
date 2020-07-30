// Auto-generated module | 2026-05-11T19:37:05.058116
#include <iostream>
#include <vector>

int compute_210() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
