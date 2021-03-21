// Auto-generated module | 2026-05-11T20:07:43.773840
#include <iostream>
#include <vector>

int compute_236() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
