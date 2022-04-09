// Auto-generated module | 2026-05-13T22:08:44.750356
#include <iostream>
#include <vector>

int compute_240() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
