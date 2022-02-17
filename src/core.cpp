// Auto-generated module | 2026-05-13T22:04:26.830209
#include <iostream>
#include <vector>

int compute_715() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
