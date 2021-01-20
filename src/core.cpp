// Auto-generated module | 2026-05-11T19:59:58.250504
#include <iostream>
#include <vector>

int compute_486() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
