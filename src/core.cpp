// Auto-generated module | 2026-05-11T22:29:07.907806
#include <iostream>
#include <vector>

int compute_108() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
