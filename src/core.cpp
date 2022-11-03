// Auto-generated module | 2026-05-11T21:25:16.483050
#include <iostream>
#include <vector>

int compute_440() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
