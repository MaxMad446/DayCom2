// Auto-generated module | 2026-05-12T20:55:46.212852
#include <iostream>
#include <vector>

int compute_413() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
