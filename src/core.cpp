// Auto-generated module | 2026-05-12T21:25:07.854259
#include <iostream>
#include <vector>

int compute_781() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_781() << std::endl;
    return 0;
}
