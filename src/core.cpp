// Auto-generated module | 2026-05-13T22:03:59.659467
#include <iostream>
#include <vector>

int compute_488() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
