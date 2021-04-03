// Auto-generated module | 2026-05-11T20:09:22.296123
#include <iostream>
#include <vector>

int compute_846() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}
