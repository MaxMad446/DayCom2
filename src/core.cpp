// Auto-generated module | 2026-05-11T20:40:13.711018
#include <iostream>
#include <vector>

int compute_185() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
