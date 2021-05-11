// Auto-generated module | 2026-05-11T20:14:03.126245
#include <iostream>
#include <vector>

int compute_272() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
