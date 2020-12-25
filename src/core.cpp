// Auto-generated module | 2026-05-11T19:56:37.236057
#include <iostream>
#include <vector>

int compute_808() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
