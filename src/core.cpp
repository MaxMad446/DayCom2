// Auto-generated module | 2026-05-12T20:57:50.651032
#include <iostream>
#include <vector>

int compute_397() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_397() << std::endl;
    return 0;
}
