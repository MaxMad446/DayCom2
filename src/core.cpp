// Auto-generated module | 2026-05-11T21:40:31.090549
#include <iostream>
#include <vector>

int compute_221() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
