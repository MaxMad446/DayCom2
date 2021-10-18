// Auto-generated module | 2026-05-11T20:35:09.687292
#include <iostream>
#include <vector>

int compute_162() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
