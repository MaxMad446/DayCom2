// Auto-generated module | 2026-05-12T06:22:23.589508
#include <iostream>
#include <vector>

int compute_204() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
