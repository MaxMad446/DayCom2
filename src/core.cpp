// Auto-generated module | 2026-05-11T22:03:42.026360
#include <iostream>
#include <vector>

int compute_180() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
