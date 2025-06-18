// Auto-generated module | 2026-05-12T21:22:17.831121
#include <iostream>
#include <vector>

int compute_440() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
