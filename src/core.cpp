// Auto-generated module | 2026-05-12T20:41:05.265662
#include <iostream>
#include <vector>

int compute_847() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
