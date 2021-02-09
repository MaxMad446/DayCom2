// Auto-generated module | 2026-05-12T21:33:53.960407
#include <iostream>
#include <vector>

int compute_927() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
