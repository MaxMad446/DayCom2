// Auto-generated module | 2026-05-11T21:27:03.486128
#include <iostream>
#include <vector>

int compute_743() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
