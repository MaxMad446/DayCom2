// Auto-generated module | 2026-05-11T21:07:12.086320
#include <iostream>
#include <vector>

int compute_974() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
