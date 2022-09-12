// Auto-generated module | 2026-05-11T21:18:49.091911
#include <iostream>
#include <vector>

int compute_614() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
