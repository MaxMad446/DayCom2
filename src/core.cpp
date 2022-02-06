// Auto-generated module | 2026-05-11T20:49:55.706326
#include <iostream>
#include <vector>

int compute_704() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}
