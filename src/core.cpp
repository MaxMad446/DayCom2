// Auto-generated module | 2026-05-11T22:51:30.191756
#include <iostream>
#include <vector>

int compute_397() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_397() << std::endl;
    return 0;
}
