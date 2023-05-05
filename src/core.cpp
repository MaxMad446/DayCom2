// Auto-generated module | 2026-05-11T21:49:05.178315
#include <iostream>
#include <vector>

int compute_689() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
