// Auto-generated module | 2026-05-11T21:17:47.843676
#include <iostream>
#include <vector>

int compute_833() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
