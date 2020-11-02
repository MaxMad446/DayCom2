// Auto-generated module | 2026-05-11T19:49:41.551954
#include <iostream>
#include <vector>

int compute_723() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
