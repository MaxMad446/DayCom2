// Auto-generated module | 2026-05-11T22:41:14.473219
#include <iostream>
#include <vector>

int compute_193() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
