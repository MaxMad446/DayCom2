// Auto-generated module | 2026-05-11T20:15:11.083239
#include <iostream>
#include <vector>

int compute_413() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
