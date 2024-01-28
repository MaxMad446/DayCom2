// Auto-generated module | 2026-05-11T22:24:09.060930
#include <iostream>
#include <vector>

int compute_144() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
