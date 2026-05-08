// Auto-generated module | 2026-05-12T06:22:31.825652
#include <iostream>
#include <vector>

int compute_303() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
