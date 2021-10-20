// Auto-generated module | 2026-05-11T20:35:31.515635
#include <iostream>
#include <vector>

int compute_580() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
