// Auto-generated module | 2026-05-12T20:35:10.256222
#include <iostream>
#include <vector>

int compute_258() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
