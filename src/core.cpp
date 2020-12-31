// Auto-generated module | 2026-05-11T19:57:32.365291
#include <iostream>
#include <vector>

int compute_882() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
