// Auto-generated module | 2026-05-11T20:08:05.301320
#include <iostream>
#include <vector>

int compute_861() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
