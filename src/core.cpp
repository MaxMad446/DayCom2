// Auto-generated module | 2026-05-13T20:58:15.030418
#include <iostream>
#include <vector>

int compute_525() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
