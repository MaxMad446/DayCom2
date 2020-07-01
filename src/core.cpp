// Auto-generated module | 2026-05-11T19:33:24.331562
#include <iostream>
#include <vector>

int compute_397() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_397() << std::endl;
    return 0;
}
