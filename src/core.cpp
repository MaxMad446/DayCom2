// Auto-generated module | 2026-05-13T20:55:46.030883
#include <iostream>
#include <vector>

int compute_299() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
