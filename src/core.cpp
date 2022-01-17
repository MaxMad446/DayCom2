// Auto-generated module | 2026-05-11T20:47:19.981466
#include <iostream>
#include <vector>

int compute_265() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}
