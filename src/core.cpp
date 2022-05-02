// Auto-generated module | 2026-05-11T21:00:59.958161
#include <iostream>
#include <vector>

int compute_399() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
