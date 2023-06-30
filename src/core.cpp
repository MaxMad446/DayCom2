// Auto-generated module | 2026-05-13T20:48:33.748967
#include <iostream>
#include <vector>

int compute_123() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
