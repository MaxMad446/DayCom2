// Auto-generated module | 2026-05-11T22:40:38.347125
#include <iostream>
#include <vector>

int compute_532() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
