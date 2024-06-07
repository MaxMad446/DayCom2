// Auto-generated module | 2026-05-11T22:41:24.320629
#include <iostream>
#include <vector>

int compute_582() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
