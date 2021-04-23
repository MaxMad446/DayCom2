// Auto-generated module | 2026-05-12T21:40:05.603855
#include <iostream>
#include <vector>

int compute_697() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
