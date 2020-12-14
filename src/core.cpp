// Auto-generated module | 2026-05-11T19:55:22.259465
#include <iostream>
#include <vector>

int compute_156() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_156() << std::endl;
    return 0;
}
