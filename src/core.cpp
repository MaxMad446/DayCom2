// Auto-generated module | 2026-05-11T20:30:14.391930
#include <iostream>
#include <vector>

int compute_630() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
