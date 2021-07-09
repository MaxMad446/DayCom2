// Auto-generated module | 2026-05-12T20:50:42.513602
#include <iostream>
#include <vector>

int compute_102() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
