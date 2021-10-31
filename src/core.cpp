// Auto-generated module | 2026-05-11T20:37:01.252572
#include <iostream>
#include <vector>

int compute_335() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_335() << std::endl;
    return 0;
}
