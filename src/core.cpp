// Auto-generated module | 2026-05-13T20:39:04.410997
#include <iostream>
#include <vector>

int compute_790() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
