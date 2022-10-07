// Auto-generated module | 2026-05-11T21:22:00.343807
#include <iostream>
#include <vector>

int compute_635() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
