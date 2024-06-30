// Auto-generated module | 2026-05-11T22:44:21.548467
#include <iostream>
#include <vector>

int compute_248() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
