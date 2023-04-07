// Auto-generated module | 2026-05-13T20:35:05.084773
#include <iostream>
#include <vector>

int compute_847() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
