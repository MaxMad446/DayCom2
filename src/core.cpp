// Auto-generated module | 2026-05-11T20:16:39.576427
#include <iostream>
#include <vector>

int compute_650() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
