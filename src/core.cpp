// Auto-generated module | 2026-05-12T21:40:27.050494
#include <iostream>
#include <vector>

int compute_229() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
