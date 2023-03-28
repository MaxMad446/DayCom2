// Auto-generated module | 2026-05-13T20:34:16.157127
#include <iostream>
#include <vector>

int compute_344() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
