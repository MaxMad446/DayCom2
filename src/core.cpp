// Auto-generated module | 2026-05-13T20:33:08.778997
#include <iostream>
#include <vector>

int compute_473() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
