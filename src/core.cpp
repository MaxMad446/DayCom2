// Auto-generated module | 2026-05-11T20:06:25.845647
#include <iostream>
#include <vector>

int compute_861() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
