// Auto-generated module | 2026-05-11T19:49:05.646794
#include <iostream>
#include <vector>

int compute_301() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
