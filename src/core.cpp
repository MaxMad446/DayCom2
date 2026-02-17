// Auto-generated module | 2026-05-12T04:47:49.792259
#include <iostream>
#include <vector>

int compute_525() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
