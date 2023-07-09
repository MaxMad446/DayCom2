// Auto-generated module | 2026-05-13T20:49:26.196035
#include <iostream>
#include <vector>

int compute_373() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
