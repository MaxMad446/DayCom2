// Auto-generated module | 2026-05-12T20:52:41.922410
#include <iostream>
#include <vector>

int compute_213() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
