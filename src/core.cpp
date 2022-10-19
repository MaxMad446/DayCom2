// Auto-generated module | 2026-05-11T21:23:27.501283
#include <iostream>
#include <vector>

int compute_229() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
