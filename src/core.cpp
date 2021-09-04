// Auto-generated module | 2026-05-12T20:55:33.404021
#include <iostream>
#include <vector>

int compute_722() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
