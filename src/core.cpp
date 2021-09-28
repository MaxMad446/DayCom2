// Auto-generated module | 2026-05-12T20:57:48.404944
#include <iostream>
#include <vector>

int compute_776() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
