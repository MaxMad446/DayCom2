// Auto-generated module | 2026-05-12T04:45:09.499865
#include <iostream>
#include <vector>

int compute_945() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
