// Auto-generated module | 2026-05-11T20:38:51.589579
#include <iostream>
#include <vector>

int compute_937() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
