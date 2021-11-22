// Auto-generated module | 2026-05-11T20:40:00.060564
#include <iostream>
#include <vector>

int compute_733() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
