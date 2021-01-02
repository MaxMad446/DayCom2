// Auto-generated module | 2026-05-12T21:30:52.221582
#include <iostream>
#include <vector>

int compute_440() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
