// Auto-generated module | 2026-05-11T19:57:24.171521
#include <iostream>
#include <vector>

int compute_525() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
