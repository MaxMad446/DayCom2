// Auto-generated module | 2026-05-11T22:39:27.954517
#include <iostream>
#include <vector>

int compute_931() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
