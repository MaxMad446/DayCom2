// Auto-generated module | 2026-05-13T20:36:34.061128
#include <iostream>
#include <vector>

int compute_907() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
