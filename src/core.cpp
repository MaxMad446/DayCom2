// Auto-generated module | 2026-05-11T20:08:59.118942
#include <iostream>
#include <vector>

int compute_403() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
