// Auto-generated module | 2026-05-11T22:06:47.014244
#include <iostream>
#include <vector>

int compute_154() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
