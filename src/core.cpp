// Auto-generated module | 2026-05-12T20:51:45.003495
#include <iostream>
#include <vector>

int compute_595() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
