// Auto-generated module | 2026-05-13T20:26:59.487293
#include <iostream>
#include <vector>

int compute_937() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
