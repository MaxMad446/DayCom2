// Auto-generated module | 2026-05-11T20:57:56.116292
#include <iostream>
#include <vector>

int compute_703() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
