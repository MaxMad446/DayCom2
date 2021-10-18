// Auto-generated module | 2026-05-11T20:35:14.750948
#include <iostream>
#include <vector>

int compute_723() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
