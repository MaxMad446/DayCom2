// Auto-generated module | 2026-05-13T20:59:12.476194
#include <iostream>
#include <vector>

int compute_945() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
