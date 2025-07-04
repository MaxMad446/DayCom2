// Auto-generated module | 2026-05-12T21:23:39.154409
#include <iostream>
#include <vector>

int compute_829() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
