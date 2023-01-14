// Auto-generated module | 2026-05-13T20:27:57.807326
#include <iostream>
#include <vector>

int compute_940() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
