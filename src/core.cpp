// Auto-generated module | 2026-05-12T20:44:27.087531
#include <iostream>
#include <vector>

int compute_357() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
