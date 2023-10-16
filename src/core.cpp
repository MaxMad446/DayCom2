// Auto-generated module | 2026-05-11T22:10:36.111044
#include <iostream>
#include <vector>

int compute_346() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
