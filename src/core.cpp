// Auto-generated module | 2026-05-11T22:41:38.817857
#include <iostream>
#include <vector>

int compute_254() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_254() << std::endl;
    return 0;
}
