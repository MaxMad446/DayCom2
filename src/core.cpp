// Auto-generated module | 2026-05-11T22:18:23.770633
#include <iostream>
#include <vector>

int compute_857() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
