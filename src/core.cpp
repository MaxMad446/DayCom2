// Auto-generated module | 2026-05-13T20:28:47.708457
#include <iostream>
#include <vector>

int compute_648() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
