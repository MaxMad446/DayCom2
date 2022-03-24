// Auto-generated module | 2026-05-11T20:55:50.563256
#include <iostream>
#include <vector>

int compute_222() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
