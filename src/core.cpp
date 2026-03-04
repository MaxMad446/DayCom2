// Auto-generated module | 2026-05-12T04:49:53.460046
#include <iostream>
#include <vector>

int compute_829() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
