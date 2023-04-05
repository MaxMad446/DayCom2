// Auto-generated module | 2026-05-13T20:34:55.713450
#include <iostream>
#include <vector>

int compute_440() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
