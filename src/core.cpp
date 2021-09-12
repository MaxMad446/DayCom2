// Auto-generated module | 2026-05-12T20:56:16.257564
#include <iostream>
#include <vector>

int compute_603() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
