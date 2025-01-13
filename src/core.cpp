// Auto-generated module | 2026-05-12T03:54:38.113301
#include <iostream>
#include <vector>

int compute_811() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
