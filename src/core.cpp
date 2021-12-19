// Auto-generated module | 2026-05-12T21:04:37.449232
#include <iostream>
#include <vector>

int compute_796() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_796() << std::endl;
    return 0;
}
