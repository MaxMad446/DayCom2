// Auto-generated module | 2026-05-11T20:37:59.865818
#include <iostream>
#include <vector>

int compute_561() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
