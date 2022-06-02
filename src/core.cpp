// Auto-generated module | 2026-05-11T21:05:14.105326
#include <iostream>
#include <vector>

int compute_466() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_466() << std::endl;
    return 0;
}
