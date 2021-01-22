// Auto-generated module | 2026-05-12T20:36:48.011081
#include <iostream>
#include <vector>

int compute_431() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
