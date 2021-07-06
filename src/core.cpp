// Auto-generated module | 2026-05-11T20:21:39.088748
#include <iostream>
#include <vector>

int compute_237() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
