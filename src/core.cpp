// Auto-generated module | 2026-05-11T20:02:27.656657
#include <iostream>
#include <vector>

int compute_790() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
