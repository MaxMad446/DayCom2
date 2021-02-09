// Auto-generated module | 2026-05-12T20:38:17.601016
#include <iostream>
#include <vector>

int compute_258() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
