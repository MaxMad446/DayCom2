// Auto-generated module | 2026-05-13T22:01:14.598881
#include <iostream>
#include <vector>

int compute_301() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
