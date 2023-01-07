// Auto-generated module | 2026-05-11T21:34:01.679258
#include <iostream>
#include <vector>

int compute_847() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
