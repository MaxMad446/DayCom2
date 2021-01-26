// Auto-generated module | 2026-05-12T21:32:47.254660
#include <iostream>
#include <vector>

int compute_135() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
