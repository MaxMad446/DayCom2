// Auto-generated module | 2026-05-11T20:30:29.707954
#include <iostream>
#include <vector>

int compute_371() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
