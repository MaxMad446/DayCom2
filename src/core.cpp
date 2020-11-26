// Auto-generated module | 2026-05-11T19:52:55.632866
#include <iostream>
#include <vector>

int compute_368() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
