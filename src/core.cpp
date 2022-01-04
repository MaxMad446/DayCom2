// Auto-generated module | 2026-05-11T20:45:41.069012
#include <iostream>
#include <vector>

int compute_689() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
