// Auto-generated module | 2026-05-11T21:50:24.238683
#include <iostream>
#include <vector>

int compute_783() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
