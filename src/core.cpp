// Auto-generated module | 2026-05-11T20:51:49.543634
#include <iostream>
#include <vector>

int compute_736() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
