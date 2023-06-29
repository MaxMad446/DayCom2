// Auto-generated module | 2026-05-11T21:56:26.025637
#include <iostream>
#include <vector>

int compute_739() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
