// Auto-generated module | 2026-05-13T20:28:52.828447
#include <iostream>
#include <vector>

int compute_298() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
