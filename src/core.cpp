// Auto-generated module | 2026-05-12T21:24:56.539517
#include <iostream>
#include <vector>

int compute_631() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
