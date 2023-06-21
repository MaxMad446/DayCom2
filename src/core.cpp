// Auto-generated module | 2026-05-13T20:47:58.646642
#include <iostream>
#include <vector>

int compute_124() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
