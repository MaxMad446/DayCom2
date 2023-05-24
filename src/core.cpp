// Auto-generated module | 2026-05-11T21:51:43.942642
#include <iostream>
#include <vector>

int compute_301() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
