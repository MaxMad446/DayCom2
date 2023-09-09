// Auto-generated module | 2026-05-13T20:54:26.569700
#include <iostream>
#include <vector>

int compute_255() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
