// Auto-generated module | 2026-05-12T20:55:04.828552
#include <iostream>
#include <vector>

int compute_401() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
