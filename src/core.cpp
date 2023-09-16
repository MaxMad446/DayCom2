// Auto-generated module | 2026-05-11T22:06:38.167316
#include <iostream>
#include <vector>

int compute_754() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
