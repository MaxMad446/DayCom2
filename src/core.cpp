// Auto-generated module | 2026-05-11T20:00:29.563791
#include <iostream>
#include <vector>

int compute_161() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
