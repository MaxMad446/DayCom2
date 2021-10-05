// Auto-generated module | 2026-05-12T20:58:22.951642
#include <iostream>
#include <vector>

int compute_769() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
