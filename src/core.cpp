// Auto-generated module | 2026-05-11T20:12:37.825120
#include <iostream>
#include <vector>

int compute_532() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
