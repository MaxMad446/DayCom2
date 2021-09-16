// Auto-generated module | 2026-05-12T20:56:41.105346
#include <iostream>
#include <vector>

int compute_213() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
