// Auto-generated module | 2026-05-11T20:31:38.030183
#include <iostream>
#include <vector>

int compute_402() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
