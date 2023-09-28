// Auto-generated module | 2026-05-13T20:56:02.246231
#include <iostream>
#include <vector>

int compute_146() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
