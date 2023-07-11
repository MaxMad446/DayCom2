// Auto-generated module | 2026-05-13T20:49:35.918112
#include <iostream>
#include <vector>

int compute_783() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
