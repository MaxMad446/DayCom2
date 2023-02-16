// Auto-generated module | 2026-05-13T20:30:49.378993
#include <iostream>
#include <vector>

int compute_693() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
