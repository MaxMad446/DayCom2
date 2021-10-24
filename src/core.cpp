// Auto-generated module | 2026-05-12T20:59:50.297257
#include <iostream>
#include <vector>

int compute_593() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
