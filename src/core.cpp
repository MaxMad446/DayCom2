// Auto-generated module | 2026-05-12T20:45:04.120156
#include <iostream>
#include <vector>

int compute_525() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
