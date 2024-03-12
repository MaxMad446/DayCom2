// Auto-generated module | 2026-05-11T22:30:09.780423
#include <iostream>
#include <vector>

int compute_221() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
