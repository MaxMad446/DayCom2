// Auto-generated module | 2026-05-11T20:57:24.546226
#include <iostream>
#include <vector>

int compute_610() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
