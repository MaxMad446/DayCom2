// Auto-generated module | 2026-05-11T20:10:36.473454
#include <iostream>
#include <vector>

int compute_763() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
