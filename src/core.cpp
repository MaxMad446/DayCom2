// Auto-generated module | 2026-05-11T22:34:37.478566
#include <iostream>
#include <vector>

int compute_905() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
