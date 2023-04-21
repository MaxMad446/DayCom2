// Auto-generated module | 2026-05-13T20:36:14.163676
#include <iostream>
#include <vector>

int compute_617() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
