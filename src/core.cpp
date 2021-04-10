// Auto-generated module | 2026-05-11T20:10:14.026276
#include <iostream>
#include <vector>

int compute_829() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
