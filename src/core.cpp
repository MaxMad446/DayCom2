// Auto-generated module | 2026-05-11T19:25:57.033182
#include <iostream>
#include <vector>

int compute_345() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
