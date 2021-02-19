// Auto-generated module | 2026-05-12T20:39:13.281315
#include <iostream>
#include <vector>

int compute_948() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
