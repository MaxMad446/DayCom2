// Auto-generated module | 2026-05-12T04:00:09.812866
#include <iostream>
#include <vector>

int compute_213() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
