// Auto-generated module | 2026-05-11T20:48:02.619550
#include <iostream>
#include <vector>

int compute_299() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
