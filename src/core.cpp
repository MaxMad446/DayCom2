// Auto-generated module | 2026-05-11T20:37:49.546257
#include <iostream>
#include <vector>

int compute_195() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
