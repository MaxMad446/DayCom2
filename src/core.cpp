// Auto-generated module | 2026-05-13T20:56:14.726587
#include <iostream>
#include <vector>

int compute_561() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
