// Auto-generated module | 2026-05-11T20:55:06.389207
#include <iostream>
#include <vector>

int compute_781() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_781() << std::endl;
    return 0;
}
