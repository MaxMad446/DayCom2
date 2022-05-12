// Auto-generated module | 2026-05-11T21:02:24.432586
#include <iostream>
#include <vector>

int compute_613() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
