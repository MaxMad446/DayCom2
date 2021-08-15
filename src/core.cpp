// Auto-generated module | 2026-05-11T20:26:57.109800
#include <iostream>
#include <vector>

int compute_628() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
