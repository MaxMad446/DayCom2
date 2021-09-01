// Auto-generated module | 2026-05-11T20:29:08.391546
#include <iostream>
#include <vector>

int compute_454() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
