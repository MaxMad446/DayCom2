// Auto-generated module | 2026-05-12T21:21:18.996137
#include <iostream>
#include <vector>

int compute_945() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
