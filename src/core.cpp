// Auto-generated module | 2026-05-12T20:57:05.805167
#include <iostream>
#include <vector>

int compute_958() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
