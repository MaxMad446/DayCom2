// Auto-generated module | 2026-05-12T04:23:51.384643
#include <iostream>
#include <vector>

int compute_426() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
