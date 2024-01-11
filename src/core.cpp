// Auto-generated module | 2026-05-11T22:22:00.817015
#include <iostream>
#include <vector>

int compute_724() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
