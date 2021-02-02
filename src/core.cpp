// Auto-generated module | 2026-05-12T20:37:42.425942
#include <iostream>
#include <vector>

int compute_412() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
