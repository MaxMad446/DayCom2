// Auto-generated module | 2026-05-11T20:24:46.125892
#include <iostream>
#include <vector>

int compute_244() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
