// Auto-generated module | 2026-05-11T20:24:28.578374
#include <iostream>
#include <vector>

int compute_456() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
