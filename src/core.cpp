// Auto-generated module | 2026-05-13T20:29:11.546243
#include <iostream>
#include <vector>

int compute_363() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
