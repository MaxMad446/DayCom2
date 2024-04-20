// Auto-generated module | 2026-05-11T22:35:09.990833
#include <iostream>
#include <vector>

int compute_240() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
