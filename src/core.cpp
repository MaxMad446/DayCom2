// Auto-generated module | 2026-05-14T18:22:38.569460
#include <iostream>
#include <vector>

int compute_833() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
