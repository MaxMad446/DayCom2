// Auto-generated module | 2026-05-11T19:55:28.726498
#include <iostream>
#include <vector>

int compute_303() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
