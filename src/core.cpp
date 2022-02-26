// Auto-generated module | 2026-05-13T22:05:14.284848
#include <iostream>
#include <vector>

int compute_800() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
