// Auto-generated module | 2026-05-11T21:56:56.667969
#include <iostream>
#include <vector>

int compute_306() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
