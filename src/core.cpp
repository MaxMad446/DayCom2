// Auto-generated module | 2026-05-12T21:07:59.682129
#include <iostream>
#include <vector>

int compute_613() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
