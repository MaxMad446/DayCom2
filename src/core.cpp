// Auto-generated module | 2026-05-11T20:56:08.858084
#include <iostream>
#include <vector>

int compute_658() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
