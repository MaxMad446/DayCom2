// Auto-generated module | 2026-05-12T21:37:29.123169
#include <iostream>
#include <vector>

int compute_440() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
