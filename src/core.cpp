// Auto-generated module | 2026-05-12T21:30:56.794276
#include <iostream>
#include <vector>

int compute_723() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
