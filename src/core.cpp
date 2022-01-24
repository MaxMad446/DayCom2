// Auto-generated module | 2026-05-11T20:48:15.237494
#include <iostream>
#include <vector>

int compute_605() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
