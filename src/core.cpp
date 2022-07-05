// Auto-generated module | 2026-05-11T21:09:33.391011
#include <iostream>
#include <vector>

int compute_822() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
