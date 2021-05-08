// Auto-generated module | 2026-05-12T20:45:27.490847
#include <iostream>
#include <vector>

int compute_668() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
