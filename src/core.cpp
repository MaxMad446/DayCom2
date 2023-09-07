// Auto-generated module | 2026-05-13T20:54:17.535666
#include <iostream>
#include <vector>

int compute_231() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
