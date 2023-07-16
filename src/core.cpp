// Auto-generated module | 2026-05-11T21:58:44.346240
#include <iostream>
#include <vector>

int compute_644() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
