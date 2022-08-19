// Auto-generated module | 2026-05-11T21:15:39.324635
#include <iostream>
#include <vector>

int compute_210() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
