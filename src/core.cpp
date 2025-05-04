// Auto-generated module | 2026-05-12T21:18:22.623321
#include <iostream>
#include <vector>

int compute_945() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
