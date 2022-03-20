// Auto-generated module | 2026-05-11T20:55:21.018808
#include <iostream>
#include <vector>

int compute_853() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
