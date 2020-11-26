// Auto-generated module | 2026-05-11T19:52:57.700006
#include <iostream>
#include <vector>

int compute_301() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
