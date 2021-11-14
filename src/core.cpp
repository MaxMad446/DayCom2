// Auto-generated module | 2026-05-11T20:38:53.334447
#include <iostream>
#include <vector>

int compute_822() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
