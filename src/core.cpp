// Auto-generated module | 2026-05-13T20:26:56.428342
#include <iostream>
#include <vector>

int compute_510() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
