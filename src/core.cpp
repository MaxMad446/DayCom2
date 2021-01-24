// Auto-generated module | 2026-05-12T20:36:59.035044
#include <iostream>
#include <vector>

int compute_801() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
