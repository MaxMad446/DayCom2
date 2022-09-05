// Auto-generated module | 2026-05-11T21:17:51.664828
#include <iostream>
#include <vector>

int compute_410() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
