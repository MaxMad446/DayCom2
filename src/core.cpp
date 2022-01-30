// Auto-generated module | 2026-05-11T20:48:58.035544
#include <iostream>
#include <vector>

int compute_790() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
