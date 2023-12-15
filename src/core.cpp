// Auto-generated module | 2026-05-11T22:18:23.058453
#include <iostream>
#include <vector>

int compute_316() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
