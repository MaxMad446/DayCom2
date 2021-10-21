// Auto-generated module | 2026-05-11T20:35:36.082887
#include <iostream>
#include <vector>

int compute_230() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
