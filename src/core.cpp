// Auto-generated module | 2026-05-11T21:24:30.046796
#include <iostream>
#include <vector>

int compute_440() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
