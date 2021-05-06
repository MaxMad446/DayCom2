// Auto-generated module | 2026-05-12T21:41:12.979499
#include <iostream>
#include <vector>

int compute_426() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
