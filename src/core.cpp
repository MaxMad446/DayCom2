// Auto-generated module | 2026-05-11T19:29:00.178495
#include <iostream>
#include <vector>

int compute_399() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
