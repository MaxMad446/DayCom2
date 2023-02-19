// Auto-generated module | 2026-05-13T20:31:03.051228
#include <iostream>
#include <vector>

int compute_565() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
