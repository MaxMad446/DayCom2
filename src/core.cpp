// Auto-generated module | 2026-05-12T20:56:11.019962
#include <iostream>
#include <vector>

int compute_515() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
