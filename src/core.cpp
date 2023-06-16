// Auto-generated module | 2026-05-11T21:54:47.380509
#include <iostream>
#include <vector>

int compute_905() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
