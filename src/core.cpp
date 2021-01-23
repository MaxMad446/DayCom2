// Auto-generated module | 2026-05-11T20:00:23.377901
#include <iostream>
#include <vector>

int compute_893() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
