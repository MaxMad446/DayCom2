// Auto-generated module | 2026-05-12T20:48:20.317487
#include <iostream>
#include <vector>

int compute_534() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
