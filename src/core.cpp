// Auto-generated module | 2026-05-12T21:25:39.366654
#include <iostream>
#include <vector>

int compute_591() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
