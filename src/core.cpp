// Auto-generated module | 2026-05-11T22:17:20.415748
#include <iostream>
#include <vector>

int compute_440() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
