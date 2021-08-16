// Auto-generated module | 2026-05-11T20:27:06.090409
#include <iostream>
#include <vector>

int compute_137() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
