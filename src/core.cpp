// Auto-generated module | 2026-05-11T20:24:53.032954
#include <iostream>
#include <vector>

int compute_549() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
