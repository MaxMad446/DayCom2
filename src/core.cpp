// Auto-generated module | 2026-05-11T20:14:35.098858
#include <iostream>
#include <vector>

int compute_822() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
