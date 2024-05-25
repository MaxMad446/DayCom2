// Auto-generated module | 2026-05-11T22:39:48.604915
#include <iostream>
#include <vector>

int compute_750() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
