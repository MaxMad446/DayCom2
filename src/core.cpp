// Auto-generated module | 2026-05-12T06:22:14.525293
#include <iostream>
#include <vector>

int compute_390() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
