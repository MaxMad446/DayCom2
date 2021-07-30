// Auto-generated module | 2026-05-11T20:24:53.765642
#include <iostream>
#include <vector>

int compute_931() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
