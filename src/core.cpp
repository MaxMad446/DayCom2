// Auto-generated module | 2026-05-11T19:40:12.873562
#include <iostream>
#include <vector>

int compute_867() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_867() << std::endl;
    return 0;
}
