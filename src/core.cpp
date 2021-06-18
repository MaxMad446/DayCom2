// Auto-generated module | 2026-05-12T20:48:56.603381
#include <iostream>
#include <vector>

int compute_359() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
