// Auto-generated module | 2026-05-13T22:05:05.514696
#include <iostream>
#include <vector>

int compute_666() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_666() << std::endl;
    return 0;
}
