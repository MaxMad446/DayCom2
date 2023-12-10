// Auto-generated module | 2026-05-11T22:17:45.457731
#include <iostream>
#include <vector>

int compute_878() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
