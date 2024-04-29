// Auto-generated module | 2026-05-11T22:36:23.523239
#include <iostream>
#include <vector>

int compute_833() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
