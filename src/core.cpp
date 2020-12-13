// Auto-generated module | 2026-05-12T20:01:53.568381
#include <iostream>
#include <vector>

int compute_510() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
