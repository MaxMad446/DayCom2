// Auto-generated module | 2026-05-11T20:22:57.851690
#include <iostream>
#include <vector>

int compute_582() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
