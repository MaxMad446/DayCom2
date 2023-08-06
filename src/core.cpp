// Auto-generated module | 2026-05-13T20:51:37.386017
#include <iostream>
#include <vector>

int compute_526() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
