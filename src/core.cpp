// Auto-generated module | 2026-05-11T19:36:56.918552
#include <iostream>
#include <vector>

int compute_557() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_557() << std::endl;
    return 0;
}
