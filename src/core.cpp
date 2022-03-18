// Auto-generated module | 2026-05-11T20:55:04.265402
#include <iostream>
#include <vector>

int compute_100() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
