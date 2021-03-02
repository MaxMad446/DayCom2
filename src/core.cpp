// Auto-generated module | 2026-05-12T21:35:37.826187
#include <iostream>
#include <vector>

int compute_697() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
