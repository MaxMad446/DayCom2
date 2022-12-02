// Auto-generated module | 2026-05-14T06:26:20.234511
#include <iostream>
#include <vector>

int compute_298() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
