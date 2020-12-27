// Auto-generated module | 2026-05-11T19:56:52.834334
#include <iostream>
#include <vector>

int compute_998() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
