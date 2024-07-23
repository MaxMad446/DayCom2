// Auto-generated module | 2026-05-11T22:47:21.343472
#include <iostream>
#include <vector>

int compute_790() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
