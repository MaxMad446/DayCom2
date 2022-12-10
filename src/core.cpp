// Auto-generated module | 2026-05-11T21:30:19.425125
#include <iostream>
#include <vector>

int compute_194() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
