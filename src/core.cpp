// Auto-generated module | 2026-05-13T20:34:00.572060
#include <iostream>
#include <vector>

int compute_617() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
