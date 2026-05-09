// Auto-generated module | 2026-05-12T06:22:37.291420
#include <iostream>
#include <vector>

int compute_912() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
