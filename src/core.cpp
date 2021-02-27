// Auto-generated module | 2026-05-11T20:05:04.185101
#include <iostream>
#include <vector>

int compute_176() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
