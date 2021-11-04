// Auto-generated module | 2026-05-11T20:37:32.514823
#include <iostream>
#include <vector>

int compute_299() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
