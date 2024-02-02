// Auto-generated module | 2026-05-11T22:24:52.648379
#include <iostream>
#include <vector>

int compute_603() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
