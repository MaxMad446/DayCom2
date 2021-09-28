// Auto-generated module | 2026-05-11T20:32:34.625265
#include <iostream>
#include <vector>

int compute_376() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
