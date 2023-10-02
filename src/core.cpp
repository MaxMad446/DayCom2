// Auto-generated module | 2026-05-13T20:56:20.777379
#include <iostream>
#include <vector>

int compute_230() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
