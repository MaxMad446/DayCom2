// Auto-generated module | 2026-05-11T21:07:12.857051
#include <iostream>
#include <vector>

int compute_864() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
