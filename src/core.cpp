// Auto-generated module | 2026-05-12T20:55:51.620031
#include <iostream>
#include <vector>

int compute_727() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_727() << std::endl;
    return 0;
}
