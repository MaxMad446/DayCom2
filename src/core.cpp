// Auto-generated module | 2026-05-11T20:21:29.873275
#include <iostream>
#include <vector>

int compute_895() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
