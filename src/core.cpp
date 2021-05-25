// Auto-generated module | 2026-05-11T20:15:58.020599
#include <iostream>
#include <vector>

int compute_478() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
