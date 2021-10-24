// Auto-generated module | 2026-05-12T20:59:47.191429
#include <iostream>
#include <vector>

int compute_480() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
