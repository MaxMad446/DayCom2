// Auto-generated module | 2026-05-11T21:15:24.376140
#include <iostream>
#include <vector>

int compute_800() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
