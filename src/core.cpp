// Auto-generated module | 2026-05-13T20:27:17.384899
#include <iostream>
#include <vector>

int compute_749() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
