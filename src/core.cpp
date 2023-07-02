// Auto-generated module | 2026-05-11T21:56:51.673016
#include <iostream>
#include <vector>

int compute_872() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
