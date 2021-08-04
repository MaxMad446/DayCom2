// Auto-generated module | 2026-05-11T20:25:34.026036
#include <iostream>
#include <vector>

int compute_193() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
