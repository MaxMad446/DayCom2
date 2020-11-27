// Auto-generated module | 2026-05-12T20:00:33.984112
#include <iostream>
#include <vector>

int compute_750() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
