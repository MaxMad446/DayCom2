// Auto-generated module | 2026-05-13T21:02:28.537054
#include <iostream>
#include <vector>

int compute_142() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
