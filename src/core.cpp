// Auto-generated module | 2026-05-13T22:04:53.076265
#include <iostream>
#include <vector>

int compute_951() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
