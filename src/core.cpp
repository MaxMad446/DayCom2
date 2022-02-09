// Auto-generated module | 2026-05-11T20:50:23.551922
#include <iostream>
#include <vector>

int compute_204() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
