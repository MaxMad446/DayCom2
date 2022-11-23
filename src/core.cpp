// Auto-generated module | 2026-05-14T06:25:34.158119
#include <iostream>
#include <vector>

int compute_504() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
