// Auto-generated module | 2026-05-11T20:45:01.727506
#include <iostream>
#include <vector>

int compute_697() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
