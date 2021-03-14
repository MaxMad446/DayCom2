// Auto-generated module | 2026-05-12T20:40:55.705107
#include <iostream>
#include <vector>

int compute_292() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
