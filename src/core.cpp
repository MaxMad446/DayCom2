// Auto-generated module | 2026-05-13T20:49:27.825771
#include <iostream>
#include <vector>

int compute_164() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
