// Auto-generated module | 2026-05-11T21:17:12.865807
#include <iostream>
#include <vector>

int compute_236() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
