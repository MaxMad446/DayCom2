// Auto-generated module | 2026-05-12T20:57:59.315869
#include <iostream>
#include <vector>

int compute_534() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
