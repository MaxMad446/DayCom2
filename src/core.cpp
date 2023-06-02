// Auto-generated module | 2026-05-13T20:46:23.575156
#include <iostream>
#include <vector>

int compute_467() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
