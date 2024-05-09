// Auto-generated module | 2026-05-11T22:37:38.470633
#include <iostream>
#include <vector>

int compute_166() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
