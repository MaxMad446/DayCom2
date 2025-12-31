// Auto-generated module | 2026-05-12T04:41:20.291634
#include <iostream>
#include <vector>

int compute_945() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
