// Auto-generated module | 2026-05-11T21:24:05.996825
#include <iostream>
#include <vector>

int compute_464() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
