// Auto-generated module | 2026-05-11T20:43:10.620165
#include <iostream>
#include <vector>

int compute_973() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
