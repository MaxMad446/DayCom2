// Auto-generated module | 2026-05-12T20:59:39.498293
#include <iostream>
#include <vector>

int compute_219() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
