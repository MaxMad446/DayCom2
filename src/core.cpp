// Auto-generated module | 2026-05-11T20:39:29.217010
#include <iostream>
#include <vector>

int compute_867() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_867() << std::endl;
    return 0;
}
