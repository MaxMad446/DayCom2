// Auto-generated module | 2026-05-12T21:21:39.033853
#include <iostream>
#include <vector>

int compute_180() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
