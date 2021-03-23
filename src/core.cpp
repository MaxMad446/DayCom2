// Auto-generated module | 2026-05-11T20:07:59.374518
#include <iostream>
#include <vector>

int compute_822() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
