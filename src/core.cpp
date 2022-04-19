// Auto-generated module | 2026-05-13T22:09:42.167509
#include <iostream>
#include <vector>

int compute_486() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
