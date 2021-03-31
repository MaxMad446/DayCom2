// Auto-generated module | 2026-05-12T20:42:20.671172
#include <iostream>
#include <vector>

int compute_426() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
