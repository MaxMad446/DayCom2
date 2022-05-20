// Auto-generated module | 2026-05-11T21:03:23.498018
#include <iostream>
#include <vector>

int compute_300() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
