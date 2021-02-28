// Auto-generated module | 2026-05-11T20:05:14.154424
#include <iostream>
#include <vector>

int compute_379() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
