// Auto-generated module | 2026-05-12T20:45:07.455296
#include <iostream>
#include <vector>

int compute_650() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
