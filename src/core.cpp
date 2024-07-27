// Auto-generated module | 2026-05-11T22:47:46.675584
#include <iostream>
#include <vector>

int compute_525() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
