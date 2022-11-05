// Auto-generated module | 2026-05-11T21:25:36.408558
#include <iostream>
#include <vector>

int compute_275() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}
