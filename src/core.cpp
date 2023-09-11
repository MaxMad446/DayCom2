// Auto-generated module | 2026-05-13T20:54:38.010473
#include <iostream>
#include <vector>

int compute_853() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
