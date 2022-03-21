// Auto-generated module | 2026-05-11T20:55:27.971246
#include <iostream>
#include <vector>

int compute_140() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
