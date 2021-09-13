// Auto-generated module | 2026-05-12T20:56:26.090159
#include <iostream>
#include <vector>

int compute_194() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
