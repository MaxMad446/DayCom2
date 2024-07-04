// Auto-generated module | 2026-05-11T22:44:57.015063
#include <iostream>
#include <vector>

int compute_763() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
