// Auto-generated module | 2026-05-11T20:22:50.892870
#include <iostream>
#include <vector>

int compute_945() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
