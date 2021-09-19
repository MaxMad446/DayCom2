// Auto-generated module | 2026-05-11T20:31:26.371439
#include <iostream>
#include <vector>

int compute_399() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
