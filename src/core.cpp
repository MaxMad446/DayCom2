// Auto-generated module | 2026-05-13T22:03:44.389552
#include <iostream>
#include <vector>

int compute_893() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
