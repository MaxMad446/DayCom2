// Auto-generated module | 2026-05-11T22:25:25.658662
#include <iostream>
#include <vector>

int compute_640() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
