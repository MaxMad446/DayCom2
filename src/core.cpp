// Auto-generated module | 2026-05-11T21:41:11.237338
#include <iostream>
#include <vector>

int compute_572() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
