// Auto-generated module | 2026-05-13T20:55:26.692156
#include <iostream>
#include <vector>

int compute_307() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
