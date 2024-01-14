// Auto-generated module | 2026-05-11T22:22:22.386498
#include <iostream>
#include <vector>

int compute_118() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
