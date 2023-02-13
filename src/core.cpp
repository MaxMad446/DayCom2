// Auto-generated module | 2026-05-11T21:38:41.090581
#include <iostream>
#include <vector>

int compute_394() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
