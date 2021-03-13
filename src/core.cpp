// Auto-generated module | 2026-05-11T20:06:46.749454
#include <iostream>
#include <vector>

int compute_119() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_119() << std::endl;
    return 0;
}
