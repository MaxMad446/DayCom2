// Auto-generated module | 2026-05-12T20:39:43.849699
#include <iostream>
#include <vector>

int compute_341() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
