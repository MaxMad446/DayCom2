// Auto-generated module | 2026-05-11T20:08:10.811977
#include <iostream>
#include <vector>

int compute_307() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
