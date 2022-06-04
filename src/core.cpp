// Auto-generated module | 2026-05-11T21:05:32.510148
#include <iostream>
#include <vector>

int compute_703() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
