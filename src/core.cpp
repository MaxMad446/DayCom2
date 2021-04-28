// Auto-generated module | 2026-05-12T21:40:24.054391
#include <iostream>
#include <vector>

int compute_653() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
