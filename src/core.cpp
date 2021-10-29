// Auto-generated module | 2026-05-11T20:36:48.513668
#include <iostream>
#include <vector>

int compute_829() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
