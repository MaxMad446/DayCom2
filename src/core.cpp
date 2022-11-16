// Auto-generated module | 2026-05-14T06:24:57.749224
#include <iostream>
#include <vector>

int compute_743() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
