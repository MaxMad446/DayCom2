// Auto-generated module | 2026-05-11T22:17:44.074662
#include <iostream>
#include <vector>

int compute_453() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
