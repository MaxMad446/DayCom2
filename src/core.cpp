// Auto-generated module | 2026-05-11T20:17:43.700227
#include <iostream>
#include <vector>

int compute_912() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
