// Auto-generated module | 2026-05-11T20:13:59.625269
#include <iostream>
#include <vector>

int compute_139() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
