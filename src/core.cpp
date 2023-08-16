// Auto-generated module | 2026-05-11T22:02:38.976647
#include <iostream>
#include <vector>

int compute_864() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
