// Auto-generated module | 2026-05-11T20:43:26.952210
#include <iostream>
#include <vector>

int compute_958() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
