// Auto-generated module | 2026-05-11T21:36:59.209026
#include <iostream>
#include <vector>

int compute_829() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
