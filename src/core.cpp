// Auto-generated module | 2026-05-13T22:05:37.802101
#include <iostream>
#include <vector>

int compute_242() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
