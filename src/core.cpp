// Auto-generated module | 2026-05-11T20:59:03.924304
#include <iostream>
#include <vector>

int compute_689() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
